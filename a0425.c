#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int num1, num2;
    int arr[100];
    freopen("input.txt","r",stdin);

    scanf("%d %d", &num1, &num2);

    for(int i=2; i<=num2; i++){
        arr[i]=i;
    }

    for(int i=2; i<=num2; i++)
    {
       if(arr[i]==0) continue;
       for(int j=i+i; j<=num2; j+=i)
        {
            arr[j] =0;
        }
    }

     for(int i=num1; i<=num2; i++)
    {
          if(arr[i]!=0)printf("%d ",arr[i]);

    }

}
