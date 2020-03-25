#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
     int arr[100001];
    int count2=0;
    int m=0;
    int sum=0;
    sum=arr[0];


    freopen("input.txt","r", stdin);

    scanf("%d %d", &num1, &num2);

    for(int i=0; i<num1; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(int i=0; i<num1; i++)
    {
        sum+=arr[i];

        if(sum==num2){
            count2++;
        }

        else if(sum >  num2){      {
           while(sum > num2){
           sum-=arr[m++];
             }
             if(sum==num2)
                count2++;
        }
        }

}
printf("%d", count2);

}
