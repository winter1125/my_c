
#include<string.h>

void main() {

    char array[10];
    //= "3200000";


    scanf("%s", &array);
    int len = strlen(array);


    for (int i = len - 1; i >= 0; i--) {

        if (array[i] != '0') {
            printf("%c", array[i]);

        }

    }
    printf("\n");


    int j = 0;
    int sum=0;

    for(int j=0; j<len; j++)
    {
         sum = sum+(array[j] - '0');
    }


    printf("%d", sum);

}
