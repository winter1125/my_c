#include <stdio.h>
#include <stdlib.h>

int odd(int num1, int num2){
if(num2>=num1)
{
    if(num1%2==1){
        printf("%d ", num1);
    }
    num1++;
    odd(num1, num2);
}

}

int main()
{
    int num1,num2;
    freopen("input.txt","r",stdin);
    scanf("%d %d", &num1, &num2);

    odd(num1, num2);
}
