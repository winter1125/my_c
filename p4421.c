#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y,temp)((temp)=(x), (x)=(y), (y)=(temp))


int arr[100][100];
int count;
int dangi[100];
int k;
int length;
int temp;
int num1;

  int search(int a, int b)
{
    if(arr[a][b]==0)
    {
        return;
    }
    count++;
    arr[a][b]=0;

    /*
     if(m<1 || m>q)
    {
        return;
    }
    if(n<1 || n>w)
    {
        return;
    }

    */
    // a-1이나 b-1이 0 보다 작어지는 경우
    //a+1이나 b+1이 num1보다 커지는 경우

    if(arr[a-1][b-1]<0){ return;}
    if(arr[a+1][b+1]>num1) { return; }

    if(arr[a-1][b]==1) search(a-1,b);
    if(arr[a+1][b]==1) search(a+1,b);
    if(arr[a][b-1]==1) search(a,b-1);
    if(arr[a][b+1]==1) search(a,b+1);


    return;

}
int main()
{
 
   int n;

   k=1;
   scanf("%d\n",&num1);

   for(int i=1; i<=num1; i++)
   {
       for(int j=1; j<=num1;j++)
       {
           scanf("%1d",&arr[i][j]);

       }

   }

   for(int i=1; i<=num1; i++)
   {
       for(int j=1; j<=num1; j++)
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

