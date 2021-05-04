#include <stdio.h>
#include <stdlib.h>

int key[7]={42,63,19,25,07,36,49};

int bubble(int key[], int n)
{

    enum tag{FALSE, TRUE} flag;
    int j, final_position, limit, bubble_key;
    limit=0;
    flag=TRUE;

    while(flag==TRUE){
        flag=FALSE;
        for(j=1; j<limit; j++)
        {
            if(key[j] > key[j+1])
            {
                bubble_key=key[j];
                key[j]=key[j+1];
                key[j+1]=bubble_key;
                flag=TRUE;
                final_position=j;
            }
            limit=final_position;
        }
    }

    for(int i=0; i<7; i++)
    {
        printf("%d ", key[i]);
    }
    }


int main()
{
    bubble(key, 7);

}

