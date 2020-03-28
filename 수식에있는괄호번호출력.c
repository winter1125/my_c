#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//수식에 있는 괄호 번호를 출력
typedef struct{
    int data[100];
    int top;
}Stacktype;

void init(Stacktype *s)
{
    s->top=-1;
}

void push(Stacktype *s,int count){

    s->data[++(s->top)]=count;
return;
}


int pop(Stacktype *s){

return s->data[(s->top)--];
}

void main(){
    Stacktype s;
    init(&s);
    int count=1;
    int num1;
    char arr[100];
    freopen("input.txt","r", stdin);
    fgets(arr, sizeof(arr), stdin);
    printf("수식:");
printf("%s\n", arr);
printf("괄호수 : ");


for(int i=0; arr[i]!=NULL;i++)
{
   if(arr[i]=='(')
   {
       push(&s, count);
       printf("%d", count);
       count++;
   }
   else
   {
       printf("%d", pop(&s));
   }

}
}
