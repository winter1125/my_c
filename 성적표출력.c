#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char name[11];
    int score;
}s;

int main()
{
    //freopen("input.txt","r",stdin);
    int n,m;
    scanf("%d%d",&n,&m);
    s a[n], b[n];
    if(n<3 || n>100)
    {
        return;
    }
    if(m<1 || m>n)
    {
        return;
    }
    for(int i=1; i<=n; i++)
    {
        scanf("%s%d",&a[i].name,&a[i].score);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(a[j].score<a[j+1].score)
            {
                b[i]=a[j];
                a[j]=a[j+1];
                a[j+1]=b[i];
            }
        }
    }
    for(int i=1; i<=m; i++)
    {
        printf("%s\n",a[i].name);
    }
    return;
}
