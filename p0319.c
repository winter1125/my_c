#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100]="6005000";
//0005006

//    scanf("%s", arr);

    int len=strlen(arr);
   // printf("%d", len);

   for(int i=0; i<len/2; i++)
   {int temp=arr[i];
   arr[i]=arr[len-i-1];
   arr[len-i-1]=temp;
    }
/*
    for(int i=0; i<len; i++)
    printf("%c", arr[i]);
*/

    for(int i=0; i<len; i++){

    if(arr[0]=='0')
    {
        for(int i=0; arr[i] == '0'; i++)
        ;

     while(i<strlen(str)){

        printf("%c", str[i]);
        sum+=str[i]-'0';
        i++;
     }

}
else
{
    for(i=0; i<strlen(arr); ++i){
        sum+=arr[i]-'0';
        printf("%c", arr[i]);
    }

}
printf("\n %d", sum);
return 0;
}
