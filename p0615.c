#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int n=50, d[501];

int main(){
int i,j,t;
srand((unsigned int)time(NULL));


for(int i=0; i<10; i++)
d[i]=rand()%n+1;

printf("¿øº»\n");
for(int i=0; i<10; i++)
printf("%3d ", d[i]);

printf("\n");

for(i=2; i<=n; i++)
{
    j=i;
    for(j=i; j>0 && d[j-1]> ; j--)
    {
        if(d[j] > d[j+1]){
        int temp=d[j];
        d[j]=d[j+1];
        d[j+1]=temp;
      }
    }
d[i-1]=d[i];
}
 printf("insert sort\n");
for(int i=0; i<10; i++)
printf("%3d ", d[i]);
}


