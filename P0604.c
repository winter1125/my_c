#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b)(((a)>(b))? (a): (b))
#define MAX_DEGREE 101

typedef struct {
    int degree;
    float coef[MAX_DEGREE];
}polynomial;

polynomial poly_add1(polynomial a, polynomial b)
{
    polynomial c;
    int apos = 0;
    int bpos = 0;
    int cpos = 0;
    int degree_a = a.degree;
    int degree_b = b.degree;
    c.degree = MAX(a.degree, b.degree);

    while (apos <= a.degree && bpos <= b.degree) {
        if (degree_a > degree_b) {
            c.coef[cpos++] = a.coef[apos++];
            degree_a--;

        }
        else if (degree_a = degree_b) {
            c.coef[cpos++] = a.coef[apos++] + b.coef[bpos++];
            degree_a--;
            degree_b--;
        }
        else {
            c.coef[cpos++] = b.coef[bpos++];
            degree_b--;
        }
    }
    return c;
}

void print_poly(polynomial p)
{
    for (int i = p.degree; i > 0; i--)
        printf("%3.1fx ^%d +", p.coef[p.degree - i], i);
    printf("%3.1f\n", p.coef[p.degree]);
}

int main(void) {
    polynomial a = { 5,{3,6,0,0,0,10} };
    polynomial b = { 4,{7,0,5,0,1} };
    polynomial c;

    print_poly(a);
    print_poly(b);
    c = poly_add1(a, b);
    printf("==============\n");
    print_poly(c);
    return 0;
}
