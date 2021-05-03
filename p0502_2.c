#include <stdio.h>
#include <stdlib.h>

int key[8] = { 0,42,63,19,25,07,36,49 };

int bubble(int key[], int n)
{

    enum tag { FALSE, TRUE } flag;
    int j, final_position, limit, bubble_key;
    limit = n;
    flag = TRUE;

    while (flag == TRUE) {
        flag = FALSE;
        for (j = 1; j < limit; j++)
        {
            if (key[j] > key[j + 1])
            {
                bubble_key = key[j];
                key[j] = key[j + 1];
                key[j + 1] = bubble_key;
                flag = TRUE;
                final_position = j;
            }
           
        }

        for (int i = 1; i < 9; i++)
        {
            printf("%d ", key[i]);
        }

        printf("\n");

    }
 limit = final_position;
   
}


int main()
{
    bubble(key, 8);

}

