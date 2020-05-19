#include <stdio.h>
#include <stdlib.h> 

void Swap(int arr[], int a, int b) 
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
int Partition(int arr[], int left, int right)
{
    int pivot = arr[left]; 
    int low = left + 1;
    int high = right;
 
    while (low <= high) 
    {
        while (pivot >= arr[low] && low <= right) 
        {
            low++;
        }
        while (pivot <= arr[high] && high >= (left+1) ) 
        {
            high--; 
        }
        if (low <= high)
        {
            Swap(arr, low, high); 
        }
    }
    Swap(arr, left, high);
    return high;
 
}
 
 
void QuickSort(int arr[], int left, int right)
{
    if (left <= right)
    {
        int pivot = Partition(arr, left, right); 
        QuickSort(arr, left, pivot - 1); 
        QuickSort(arr, pivot + 1, right); 
    }
}
 

int main()
{
    int i;
    int arr[5];

	
    printf("정렬전 배열 :");
	for(i = 0 ; i < 5 ; ++i)
        scanf("%d", &arr[i]);
	

    QuickSort(arr,0,4);

	printf("정렬후 배열 :");
    for(i = 0 ; i < 5 ; i++)
        printf("%d ", arr[i]);
	

    return 0;
}
