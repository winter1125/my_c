#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y,temp)((temp)=(x), (x)=(y), (y)=(temp))


int arr[100][100];
int count;
int dangi[100];
int k;
int length;
int temp;

int search(int a, int b)
{
    if(arr[a][b]==0)
    {
        return;
    }
    count++;
    arr[a][b]=0;

    if(arr[a-1][b]==1) search(a-1,b);
    if(arr[a+1][b]==1) search(a+1,b);
    if(arr[a][b-1]==1) search(a,b-1);
    if(arr[a][b+1]==1) search(a,b+1);


    return;

}

int main()
{
   freopen("input.txt","r",stdin);
   int n;
   int num1;
   k=1;
   scanf("%d",&num1);

   for(int i=1; i<=num1; i++)
   {
       for(int j=1; j<=num1;j++)
       {
           scanf("%1d",&arr[i][j]);

       }

   }

   for(int i=1; i<=n; i++)
   {
       for(int j=1; j<=n; j++)
       {
           if(arr[i][j]==1)
           {
             search(i,j);
             dangi[k++]=count;
             length++;

           }
           count=0;
       }
   }
   for(int i=1;i<=length-1;i++)
   {
       for(int j=1; j<=length-i; j++)
       {
           if(dangi[j]>dangi[j+1])
           {
               SWAP(dangi[j], dangi[j+1], temp);


           }
       }
   }
   printf("%d\n",length);
   for(int i=1; i<=length; i++)
   {
       printf("%d\n",dangi[i]);
   }
   return;
}
