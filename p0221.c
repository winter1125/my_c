#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

struct student {
    char name[10];
    int kok, eng, mat;
    int tot;
    int rank;
};
int k;
int kk;

int main()
{

    int n;
    scanf("%d", &n);

    struct student class[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", &class[i].name, &class[i].kok, &class[i].eng, &class[i].mat);


        /*
     struct student class[4]={{"Jeon", 95,80,100,0,1},
                             {"Kim", 59,85,75,0,1},
                            {"Lee", 90,100,75,0,1},
                  {"Bae", 100,82,80,0,1}};

      */

        for (int i = 0; i < n; i++) {
            class[i].tot = class[i].kok + class[i].eng + class[i].mat;
        }

    }

    for (k = 0; k < n; k++) {

        int max = 0;
        if (class[k].kok > max) max = class[k].kok;
        kk = k;

    }
    printf("%s ", class[kk].name);


    int second;
    class[kk].rank = 1;

    for (k = 0; k < n; k++) {
        int rank = 1;
        for (int y = 0; y < n; y++) {
            if (class[k].eng<class[y].eng)
                class[k].rank++;
        }
    }
    printf("%d  ", class[kk].rank);

    class[kk].rank = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (class[i].mat < class[j].mat)

                class[i].rank++;
        }
    }
    printf("%d\n", class[kk].rank);

}




