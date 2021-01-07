#include<stdio.h>

#define MAX_SIZE 100
#include<stdbool.h>

typedef struct Stacktype {
   char stack[MAX_SIZE];
   int top;
}Stacktype;

void Stack_init(Stacktype* s) {
   s->top = -1;
}

void Stack_push(Stacktype* s, char item) {
   s->stack[++(s->top)] = item;
   return;
}

bool is_empty(Stacktype* s) {
   return (s->top == -1);
}

char Stack_pop(Stacktype* s) {
  /*

   char t = s->stack[s->top];
   s->stack[s->top] = 0;
   s->top--;
   return t;
   */
   return s->stack[(s->top)--];

}

int main(void) {
   printf("���ڿ��� �Է��Ͻÿ� : ");
   char input[MAX_SIZE];
   scanf_s("%s", input, sizeof(input));

   Stacktype s;
   Stack_init(&s);
   int i = 0;
   while (input[i] != NULL) {
      if ('a' <= input[i] && input[i] <= 'z')
         Stack_push(&s, input[i]);
      // �빮�ڴ� �ҹ��ڷ� �ٲ㼭 stack�� ����.
      else if ('A' <= input[i] && input[i] <= 'Z')
         Stack_push(&s, input[i] - ('A' - 'a'));
      i++;
   }
   bool flag = true;
   i = 0;
   while (input[i] != NULL) {
      if ('a' <= input[i] && input[i] <= 'z') {
         if (Stack_pop(&s) != input[i]) {
            flag = false;
            break;
         }
      }
      else if ('A' <= input[i] && input[i] <= 'Z') {
         if (Stack_pop(&s) != (input[i] - ('A' - 'a'))) {
            flag = false;
            break;
         }
      }
      i++;
   }
   if (flag)
      printf("ȸ���Դϴ�.\n");
   else
      printf("ȸ���̾ƴմϴ�.\n");
}
