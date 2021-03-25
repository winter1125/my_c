#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char arr[100];
    scanf("%s",arr);
    int sum=0;
    int len=strlen(arr);
   // printf("%d\n",len);
    int i;
    for(i=0;i<len/2;i++)
    {
        char temp=arr[i];
        arr[i]=arr[strlen(arr)-i-1];
        arr[strlen(arr)-i-1]=temp;
    }


/*
    for(i=0;i<len;i++)
    {
        printf("%c",arr[i]);
    }

    printf("\n");

*/
    if(arr[0]=='0')

    {
        for(i=0;arr[i]=='0';i++)
        ;
    while(i<strlen(arr))
    {
        printf("%c",arr[i]);
        sum=sum+arr[i]-'0';
        i++;
    }

    }
    else{
            for(i=0;i<len;i++){
sum=sum+arr[i]-'0';
    }

}

printf("%d",sum);
}
