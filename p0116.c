#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,col, row;
    col=10;
    row=10;
    for(i=1; i<=row;i++)
    {
        for(j=1; j<=col;j++)
            if(i==1 || i==row)
            {
                if(j==1 || j==col)
                    printf("+");
                else
                    printf("-");
            }
            else if(j==1 || j==col)
                printf("|");
            else
                printf(" ");
            printf("\n");
    }
}
