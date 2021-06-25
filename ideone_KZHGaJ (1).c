#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef char element;
typedef struct{
  element data[MAX];
  int top;
}StackType;

void init_stack(StackType *s)
{ s->top=-1;
}

int is_empty(StackType *s)
{
return -1;
}

int is_full(StackType *s)
{
return(s->top==(MAX-1));
}

void push(StackType *s,element item)
{
if(is_full(s)){
printf("stack\n");
return ;
}
else s->data[++(s->top)]=item;
}
element pop(StackType *s)
{
if(is_empty(s)){
printf("stack error");
exit(1);
}
else return s->data[(s->top)--];
}
element peek(StackType *s)
{
if(is_empty(s)){
printf("error");
exit(1);
}
else return s->data[s->top];
}

int check(const char *in)
{
StackType s;
char ch, open_ch;
int i,n=strlen(in);
init_stack(&s);

for(i=0; i<n; i++){
ch=in[i];
switch(ch){
case '(' : case '[': case '{':
push(&s,ch);
break;
case ')':case ']':case '}':
if(is_empty(&s) return 0;
else{
open_ch=pop(&s);
if((open_ch == '(' && ch != ')') ||
   (open_ch=='[' && ch != ']') ||
   (open_ch == '{' && ch != '}')){
   return 0;
}
break;
}
}
}
if(!is_empty(&s)) return 0;
return 1;
}

int main(void)
{
 char *p="{A(i+1)]=0;}";
 if(check(p) ==1)
  printf("%s 괄호 검사 성공 \n", p);
  else 
  printf("%s 괄호검사 실패 \n", p);
  return 0;
}



}

/*

int main(void) {
	// your code goes here
	//return 0;

}
*/