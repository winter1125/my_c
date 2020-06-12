#include<stdio.h>
#include<string.h>
typedef struct student{
char schedule[100];
int year;
int month;
int day;
}a;

int main()
{
    freopen("input.txt","r",stdin);
    a s[100],temp;
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%s%d%d%d",&s[i].schedule,&s[i].year,&s[i].month,&s[i].day);
    }

    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=n-i; j++ )
        {
            if(s[j].year>s[j+1].year)
            {
                temp=s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }
            else if(s[j].year==s[j+1].year)
            {
                if(s[j].month>s[j+1].month)
                {
                    temp=s[j+1];
                    s[j+1]=s[j];
                    s[j]=temp;
                }
                else if(s[j].month==s[j+1].month)
                {
                    if(s[j].day>s[j+1].day)
                    {
                        temp=s[j+1];
                        s[j+1]=s[j];
                        s[j]=temp;
                    }
                    else if(s[j].day==s[j+1].day)
                    {
                        int a,b,c,flag;
                        a=strlen(s[j].schedule);
                        b=strlen(s[j+1].schedule);
                        if(a<b)
                        {
                             c=b;
                        }
                        else if (a>b)
                        {
                            c=a;
                        }
                        else
                        {
                            c=a;
                        }
                        flag=0;
                        for(int i=0; i<c; i++)
                        {
                            if(s[j].schedule[i]=='0')
                            {
                                flag=1;
                                break;
                            }
                            if(s[j].schedule[i]>s[j+1].schedule[i])
                            {
                                flag=1;
                                break;
                            }
                            else if(s[j].schedule[i]<s[j+1].schedule[i])
                            {
                                break;
                            }
                        }
                        if(flag==1)
                        {
                            temp=s[j+1];
                            s[j+1]=s[j];
                            s[j]=temp;
                        }
                    }
                }
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        printf("%s\n",s[i].schedule);
    }
    return ;
}
