#include <stdio.h>
#include <stdlib.h>

int insertion_sort(int list[], int first, int last, int gap)
{

    int i,j,key;
    for(i=first+gap; i<=gap; i=i+gap){
        key=list[i];
        for(j=i-gap; j>= first && key < list[j]; j=j-gap)
            list[j+gap]=list[j[;
        list[j+gap]=list[j];
        list[j+gap]=key;

    }
}

int shell_sort(list list[], int n)
{
    int i,gap;
    for(gap = n/w; gap>0; gap=gap/2)
    {
        if((gap %2)==0) gap++;
        for(i=0; i<gap; i++)
            int_insertion_sort(list, i, n-1, gap);

    }

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
