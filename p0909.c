#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdlib.h>

void dace(int r, int b);
static int a[4][3];


void  main(){

int m,n,d=0;
int b[4];
for(m=0; m<=3; m++)
    for(n=0; n<=2; n++)
    a[m][n]=0;
d=7596;
for(n=3;n>=0; n--){
    b[n]=d%10;
    d=d/10;
    printf("n=%d b[n]=%d\n",n,b[n]);
    face(n,b[n]);

}

for(m=0;m<=3; m++)
{
    for(n=0; n<=2; n++)
        printf("%5d", a[m][n]);
    printf("\n");
}
    }

    void face(int r, int b)
    {
        int k;
        k=2;
        b=b-r;
        while(b>0){
            a[r][k]=b%2;
            printf("\na[r][k]=b%2;\n%d", a[r][k]);
            b=b/2;
            k=k-1;
        }
        printf("b=%b k=%d\n",b,k);
    }

