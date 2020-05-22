#include<stdio.h>
#include<string.h>
int main()
{
   freopen("input.txt","r",stdin);
   char str[21];
   char * a;
   a=&str;
   scanf("%s",str);
   int n= strlen(str);
   for(int i=0; i<n; i++)
   {
       printf("%c",a[i]+2);
   }
   printf("\n");
   for(int i=0; i<n; i++)
   {
       printf("%c",(a[i]*7)%80+48);
   }
}
