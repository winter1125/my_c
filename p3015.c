#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define SWAP(x,y,tmp)((tmp)=(x), (x)=(y),(y)=(tmp))

typedef struct class{
    char name[20];
    int jum;
}s;

void swap2(char *to, char *from)
{
    char tmp[100];
    strcpy(tmp, to);
    strcpy(to, from);
    strcpy(from, tmp);
}

int main()
{
    int bun[100]={0,};
    int tmp;
    struct class s[100];
    int num1, num2;
    freopen("input.txt","r",stdin);
    scanf("%d %d", &num1, &num2);
    //num1 : µ¥ÀÌÅ¸ÀÇ °¹¼ö
    // num2 : Ãâ·ÂÀÎ¿ø

    for(int i=0; i<num1; i++)
    {
        scanf("%s %d",s[i].name , &s[i].jum);
        bun[i]++;
    }

    for(int i=0;i<num1; i++)
    {
       for(int j=0; j<num1; j++)
        if(s[j].jum < s[j+1].jum)
       {

           swap2(s[j].name, s[j+1].name);
           SWAP(s[j].jum, s[j+1].jum, tmp);


       }
       else if(s[j].jum ==s[j+1].jum){
        if(bun[j]<bun[j+1])
        {
             swap2(s[j].name, s[j+1].name);
           SWAP(s[j].jum, s[j+1].jum, tmp);


        }
        /*
        else if(bun[j]==bun[j+1])
        {
            if(strcmp(s[j].name, s[j+1].name)>0)
            {
                swap2(s[j].name, s[j+1].name);
           SWAP(s[j].jum, s[j+1].jum, tmp);

            }
        }

       }

    }


    for(int i=0; i<num2; i++)
    {
        printf("%s\n", s[i].name);
    }

}
