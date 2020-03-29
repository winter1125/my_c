#include<stdio.h>
#include<stdlib.h>
void main(){

    freopen("input.txt","r",stdin);
    //fropne("output.txt","r",stdout);
    int num1;

    scanf("%d", &num1);
    if(num1 >=148){
        printf("%d red stop", num1);}
    else if(num1 >=100 && num1 <148){
      printf("%d yellow  careful", num1);
    }
    else if(num1 >=74 && num1 <100)
    {
        printf("%d possible green", num1);
    }
    else if(num1 >=1 && num1 <74)
    {

        printf("%d blue recommend",num1);

    }
    else
    {
        printf("%d data error", num1);
    }
    }




