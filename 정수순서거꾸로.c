#include <stdio.h>
#include <stdlib.h>
//정수의 크기를 꺼꾸로 하는 프로그램 스택사용
    typedef struct{
    int data[100];
    int top;
    }Stacktype;

    void init(Stacktype *s){
    s->top=-1;
    }

    void push(Stacktype *s,int data){
        s->data[++(s->top)]=data;
        return ;
   }

  int pop(Stacktype *s){
     return s->data[(s->top)--];
      };

int main()
{
    Stacktype s;

    freopen("input.txt", "r",stdin);
    printf("정수배열의 크기 : ");

    int num1;
    int arr;
    scanf("%d", &num1);
    init(&s);
    printf("%d\n", num1);
    printf("원    본:");
    for(int i=0; i<num1;i++)
    {
      scanf("%d", &arr);
      printf("%d", arr);
      push(&s,arr);
    }

    printf("\n반전 결과:");
    for(int i=0; i<num1; i++)
    {
        printf("%d", pop(&s));
    }
    return 0;
}
