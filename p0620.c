#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    float coef;
    int expon;
}polynomial;


polynomial terms[MAX] = { {8,3},{7,1},{1,0},{10,3},{3,2},{1,0} };
int avail = 6; 

char compare(int a, int b)
{
    if (a > b) return '>';
    else if (a == b) return '=';
    else return '<';

}


int attatch(float coef, int expon)
{

    if (avail > MAX) {
        printf("error");
        exit(1);
    }
    terms[avail].coef = coef;
    terms[avail].expon = expon;
    avail++;
}

void poly_add2(int As, int Ae, int Bs, int Be, int* Cs, int* Ce)
{

    float tempcoef;
    *Cs = avail;
    while (As <= Ae && Bs <= Be)
        switch (compare(terms[As].expon, terms[Bs].expon)) {
        case '>':
            attatch(terms[As].coef, terms[As].expon);
            As++; break;
        case '=':
            tempcoef = terms[As].coef + terms[Bs].coef;
            if (tempcoef)
                attatch(tempcoef, terms[As].coef);
                As++; Bs++; break;
        case '<':
            attatch(terms[Bs].coef, terms[Bs].expon);
            Bs++; break;
        }


    for (; As <= Ae; As++)
        attatch(terms[As].coef, terms[As].expon);
    for (; Bs <= Be; Bs++)
        attatch(terms[Bs].coef, terms[Bs].expon);
    *Ce = avail - 1;
}

void printf_poly(int s, int e)
{

    for (int i = s; i < e; i++)
        printf("%3.1fx ^%d + ", terms[i].coef, terms[i].expon);
    printf("%3.1fx ^ %d\n", terms[e].coef, terms[e].expon);
}


int main()
{
    //    printf("Hello world!\n");

      //  return 0;

    int As = 0, Ae = 2, Bs = 3, Be = 5, Cs , Ce;
    poly_add2(As, Ae, Bs,Be, &Cs, &Ce);
    printf_poly(As, Ae);
    printf_poly(Bs, Be);
    printf("=================\n");
    printf_poly(Cs, Ce);
    return 0;

}
