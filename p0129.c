#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define swap(x,y,tmp)((tmp)=(x), (x)=(y),(y)=(tmp))

int main(){

int num;
//int arr[]={7,4,5,1,2};
int tmp;
int arr[100];
//num=sizeof(arr)/sizeof(int);

scanf("%d", &num);

for(int i=0; i<num; i++)
{
    scanf("%d", &arr[i]);
}



for(int i=0; i<num; i++)
    {

    for(int j=0; j<num-i-1;j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(arr[j], arr[j+1], tmp);
        }
    }


}
for(int k=0; k<num; k++)
    {
        printf("%d\n",arr[k]);
    }

}
