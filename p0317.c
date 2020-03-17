#include<stdio.h>
#include<stdlib.h>

int binary(int num1)
{

    if(num1<2)
        printf("%d", num1);
    else
    {
        binary(num1/2);
        printf("%d", num1%2);
            }
            return 0;
}
void main(){
    int num1;
    scanf("%d", &num1);

    binary(num1);



}
