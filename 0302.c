#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,temp)((temp)=(x),(x)=(y),(y)=(temp))

int main()
{
   int num1;
   int mat[1001], info[1001];
   int rank1[1001];
   int temp;
   freopen("input.txt", "r", stdin);
   scanf("%d", &num1);
  // printf("%d", num1);

   for(int i=0; i<num1; i++)
   {
       scanf("%d %d", &mat[i], &info[i]);
   }

for(int i=0; i<num1; i++)
   {
       rank1[i]=i+1;
   }


   for(int i=0; i<num1-1; i++)
   {
       for(int j=0; j<num1-1-i; j++)
       {
           if(mat[j]<mat[j+1])
           {
             SWAP(rank1[j], rank1[j+1], temp);
             SWAP(mat[j], mat[j+1], temp);
             SWAP(info[j], info[j+1], temp);
           }

           else if( mat[j]==mat[j+1])
           {
               if(info[j]<info[j+1])
               {
             SWAP(rank1[j], rank1[j+1], temp);
             SWAP(mat[j], mat[j+1], temp);
             SWAP(info[j], info[j+1], temp);
           }

           else if(info[j]==info[j+1])
           {
               if(rank1[j]>rank1[j+1])
               {
             SWAP(rank1[j], rank1[j+1], temp);
             SWAP(mat[j], mat[j+1], temp);
             SWAP(info[j], info[j+1], temp);
           }
               }
           }
               }
           }

   for(int i=0; i<num1; i++)
{
 printf("%d %d %d\n", rank1[i], mat[i], info[i]);




       }

}
