#include <stdio.h>
#include <stdlib.h>
//������ ũ�⸦ ���ٷ� �ϴ� ���α׷� ���û��
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
    printf("�����迭�� ũ�� : ");

    int num1;
    int arr;
    scanf("%d", &num1);
    init(&s);
    printf("%d\n", num1);
    printf("��    ��:");
    for(int i=0; i<num1;i++)
    {
      scanf("%d", &arr);
      printf("%d", arr);
      push(&s,arr);
    }

    printf("\n���� ���:");
    for(int i=0; i<num1; i++)
    {
        printf("%d", pop(&s));
    }
    return 0;
}
