#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef struct{
    char data[MAX];
    int top;
}StackType;

void init(StackType *s)
{
        s->top=-1;
}


int is_full(StackType *s)
{
    return (s->top==(MAX-1));

}

int is_empty(StackType *s)
{
    return (s->top==-1);

}


void push(StackType *s, int item)
{
    if(is_full(s)) {
        printf("full\n");
        return;
    }
    else
        s->data[++(s->top)]=item;
}

int pop(StackType *s)
{
    if(is_empty(s)){
        printf("is_empty\n");
        exit(1);
    }
    else
        return s->data[(s->top)--];
}

int peek(StackType *s)
{
    if(is_empty(s))
    {
        printf("is_empty\n");
        exit(1);
    }
    else
        return s->data[s->top];
}


int eval(char exp[])
{
    int op1, op2, value, i=0;
    int len=strlen(exp);
    char ch;
    StackType s;
    init(&s);

    for(i=0; i<len; i++)
    {
        ch=exp[i];
        if(ch != '+' && ch != '-' && ch != '*' && ch != '/'){
            value = ch-'0';
            push(&s, value);

        }
        else
        {

            op2=pop(&s);
            op1=pop(&s);
            switch(ch){
                case '+': push(&s, op1+op2); break;
                case '-': push(&s, op1-op2); break;
                case '*': push(&s, op1*op2); break;
                case '/': push(&s, op1/op2); break;

            }
        }
    }
    return pop(&s);
}

int main(){
  int result=0;//
  char p[]="82/3-32*+\n";
  printf("후위표기식은= %s", p);
  result=eval("82/3-32*+");
  printf("결과값은 = %d\n", result);
  return 0;
}
