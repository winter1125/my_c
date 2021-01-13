#include <stdio.h>
#include <stdlib.h>

int main(){
    char arr[20]="hello_world^^";
    int result[20];
   // gets(arr);
    //printf("%s", arr);
    int i;

    for(i=0; arr[i]!=NULL;i++){

            result[i]=arr[i] +2;
            printf("%c", result[i]); }
    printf("\n");
    for(i=0; arr[i]!=NULL;i++){

            printf("%c", (result[i]*7)%80+48);}
}
