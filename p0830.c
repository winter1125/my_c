#include <stdio.h>

int main()
{
    int arr[3][4] = { {11,15,21,25},
        {31,35,41,45},
    {51,55,61,65} };

    int(*arrptr)[4];

    printf("%d, ", arr);
    printf("%d, ", *(*arr+1));
    printf("%d, ", *(*(arr + 2)+3));
    printf("\n");

    arrptr = arr;
    arrptr++;

    printf("%d, ", arrptr);
    printf("%d, ", *(*arrptr + 1));
    printf("%d, ", *(*(arrptr + 1) + 2));
    return 0;


}