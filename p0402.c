#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,tmp)((tmp)=(x),(x)=(y),(y)=(tmp))

int main()
{
    int cc[100]={0};
    int num1,tmp,k,count2[100]={0,};
    int count[100]={0,};
    freopen("input.txt","r",stdin);
    int a[100],b[100],c[100];
    int count11=0, count22=0, count33=0;

    scanf("%d", &num1);
    for(int i=0; i<num1;i++)
    {
        scanf("%d %d %d", &a[i],&b[i],&c[i]);
    }

    for(int i=0; i<num1-1;i++){
    for(int j=0; j<num1-1-i;j++){
            if(c[j]<c[j+1]){
            SWAP(a[j],a[j+1],tmp);
            SWAP(b[j],b[j+1],tmp);
            SWAP(c[j],c[j+1],tmp);
        }
    }
    }
  for(int i=0; i<num1;i++){
   printf("%d %d %d\n", a[i],b[i],c[i]);
        }
printf("\n");

}
