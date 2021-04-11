#include <stdio.h>
#include <stdlib.h>

int main()
{
   su(5);
   printf("\n");
}


int su(int i)
{

    int s=0;
    if(i<2) return s;
    if(i==2){
        s=1;
    }

    else
    {

        s=su(i-1)+i-1;
    }
    printf("%3d",s);
    return(s);
}
