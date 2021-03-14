#include<stdio.h>
void main(){
int flag=0;
int arr[100];
int sum=0;

for(int i=0;i<7;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<7;i++)
{
    if(arr[i]%2!=0){
        flag++;
        sum=sum+arr[i];
    }

}

if(flag==0)
{
    printf("-1");
}
else
{
    printf("%d",sum);
}
}
