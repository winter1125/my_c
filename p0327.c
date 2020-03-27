#include<stdio.h>
#include<stdlib.h>

char arr[10001];


int check(){
int open1=0, open2=0;
int close1=0, close2=0;

for(int i=0;arr[i]!=NULL;i++)
{
    if(arr[i]=='(')open1++;
    if(arr[i]==')')close1++;
    if(arr[i]==']')open2++;
    if(arr[i]=='[')close2++;
}

if(open1 != close1 || open2 != close2) return 0;
else return 1;

}

int main(){
    int count=1;
    int sum=0;

freopen("input.txt","r",stdin);
fgets(arr,sizeof(arr), stdin);
if(check()== 0){
    printf("0");
    return 0;
}

for(int i=0; arr[i]!= NULL;i++){
    if(arr[i]== '('){
        count*=2;
       }
       if(arr[i]=='[')
       {
           count*=3;
       }
       if(arr[i]== ')')
       {
           if(arr[i-1]=='('){
            sum+=count;
       }

       count/=2;

       }

       if(arr[i] == ']')
       {
           if(arr[i-1] =='['){
            sum+=count;
       }

       count/=3;
       }
}

printf("%d", sum);
}
