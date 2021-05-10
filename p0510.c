#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y,t)((t)=(x), (x)=(y),(y)=(t))
#define MAX 500
#define SIZE 5

typedef struct{
    char word[MAX];
    char meaning[MAX];
}element;

element list[SIZE];

int main(void)
{

    int i,j;
    element temp;

    printf("input=?");
    for(i=0; i<SIZE;i++){
        scanf("%s[^\n", list[i].word);
        scanf("%d[^\n]", list[i].meaning);

    }

    for(i=0; i<SIZE; i++){

        for(j=i+1; j<SIZE; ++j){
            if(strcmp(list[i].word, list[j].word)>0){
                SWAP(list[i], list[j],
                     temp);
            }
        }
    }


    printf("\n Á¤·ÄÈÄ \n");

    for(i=0; i<SIZE; i++){
        printf("%d %d\n", list[i].word, list[i].meaning);

    }

    return 0;


}
