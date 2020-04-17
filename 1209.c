#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0;
    printf("number=?");
    int num1;
    scanf("%d", &num1);
    for(i=0; i<num1; i++){
        if(i<num1/2+1){
            for(j=0; j<num1; j++)
            {
                if(j<i || num1-i <=j)
                    printf(" ");
                else
                printf("*");

            }
            printf("\n");
        }
else{
    for(j=0; j<num1; j++){
        if(num1-i-1 > j || i<j)
            printf(" ");
        else
            printf("*");
        }
        printf("\n");
}
    }
}
