#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define SWAP(x,y,temp)((temp)=(x),(x)=(y),(y)=(temp))

#define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )  //a¿Í b ±³È¯  


int data[8] = { 67,90,57,25,84,32,73,54 };
int num1 = 8;

void quicksort(int* data, int start, int end) {


    if (start >= end) {
        return;
    }


    int key = start;
    int i = start + 1;
    int j = end;
    int temp;

    for (int i = 0; i < num1; i++)
    {
        printf("%d\t", data[i]);
    }
    printf("\n");

    for (int i = 0; i < num1; i++)
    {
        if (i == end)
            printf("high\t");
        else if (i == start + 1)
            printf("low\t");
        /*
        else if (end == start+1)
            printf("low high\t");
            */
        else
            printf("\t");


    }

    while (j >= i) {
        while (data[key] >= data[i]) {
            i++;
        }

        while (data[key] <= data[j] && j > start) {
            j--;
        }



        if (i > j)
        {
            //SWAP(data[j], data[key], temp);
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;

        }

        else {
            // SWAP(data[j], data[i], temp);
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
        
      printf("\n");

    }

    quicksort(data, start, j - 1);

    quicksort(data, j + 1, end);

}


int main(void)
{


    quicksort(data, 0, num1 - 1);


}
