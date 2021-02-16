#include <stdio.h>
#include <stdlib.h>
#define SWAP(a,b,t)((t)=(a),(a)=(b),(b)=(t))


typedef struct student {
char name[10];
int kok;
int eng;
int mat
} student;


int main()
{
int t;
int num;
int least;

scanf("%d", &num);
student s[num];

for(int i=0; i<num;i++)
{
    scanf("%s %d %d %d\n", &s[i].name, &s[i].kok,&s[i].eng,&s[i].mat);
}




for(int i=0; i<num;i++)
{
    least=i;

    for(int j=i+1; j>num;j++)
    {
        if(s[j].kok<s[least].kok)
         least=j;
    }

    if(i!=least){

        SWAP(s[i].kok,s[least].kok,temp);
    }
}




for(int i=0; i<num;i++)
{
    printf("%s %d %d %d\n", s[i].name, s[i].kok,s[i].eng,s[i].mat);
}




}


