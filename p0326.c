#include <stdio.h>
#include <stdlib.h>

int main()
{

    char arr[100];
    freopen("input.txt","r",stdin);
    fgets(arr, sizeof(arr), stdin);
    int sum=0;
    int cal=1;

    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;

    int chk(){

     for(int i=0; arr[i]!=NULL; i++){
       if(arr[i]=='('){num1++;}
       if(arr[i]==')'){num2++;}
       if(arr[i]==']'){num3++;}
       if(arr[i]=='['){num4++;}
       if((num1 < num2) ||  (num3 < num4)) {return 1;}
       else
       {
           return 0;
       }
    }

   if(chk()){
    printf("0");
    return 0;
   }


    for(int i=0; arr[i]!=NULL; i++){
    if(arr[i]!='(' && arr[i] !=')' && arr[i]!='[' && arr[i] != ']' )
        break;





     if(arr[i]=='('){
         cal*=2;
        }

    if(arr[i]=='['){
          cal*=3;

       }

   if(arr[i]==')'){
        if(arr[i-1]=='('){
        sum+=cal;

       }
    cal/=2;
   }

   if(arr[i] ==']'){

    if(arr[i-1]=='['){
       sum+=cal;
   }
      cal/=3;
       }
    }
     printf("%d", sum);
}
}


