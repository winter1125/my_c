#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r", stdin);
    int num1;
    char arr[100];
    int count=0;
    fgets(arr, sizeof(arr), stdin);
    printf("���ڿ��� �Է��Ͻÿ� : ");
    printf("%s\n", arr);

    for(int i=0; arr[i] != NULL;i++)
    {
        if(arr[i] >='A' && arr[i]<='Z')
        {
            arr[i]=arr[i]+32;
        }


    }

   printf("����� ���ڿ� : ");
    for(int i=0; arr[i]!=NULL; i++){
        count++;
        if(arr[i]!=arr[i+1])
        {
            printf("%d%c",count,arr[i]);
            count=0;
        }
    }

}
