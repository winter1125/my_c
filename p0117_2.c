
#include <stdio.h>
#include <stdlib.h>
#define N 6

int main(void){
    int i;
    int total=0;
    char word[N+1];

    struct Computer_Subject{
        char subject[20];
        int score;
    }CS[]={{"Programming",80},
          {"System_Analysis",90},
          {"Database",80},{"Architecture",90},
          {"Network",80},{"Internet",90}};

   for(i=0; i<N;i++){
    word[i]=CS[i].subject[i];
    total+=CS[i].score;

   }

   word[i]='\0';
   printf("%s %5.2f",word,(float)total/N);
   return 0;

}
