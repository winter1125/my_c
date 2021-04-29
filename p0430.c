#include <stdio.h>
#include <stdlib.h>

float sum = 0, tot_t = 0;
int a, b;
float time = 0;
int main()
{
    float a[5] = { 16.0, 17.0, 18.5, 22.5,19.5 };
    float b[5] = { 16.5,20.5,23.0,23.5,22.5 };

    for (int i = 0; i < 5; i++) {

        float diff = b[i] - a[i];
        sum = sum + diff;
        printf("%g - %g = %g\n", a[i], b[i], diff-1);

        if(diff <= 1) { 
            time = 0;
        }else if(diff > 1 && diff <= 5) { 
            time = time - 1;
        } else { time = 4; }
        tot_t = tot_t + time;

    }
    printf("\nsum=%g", sum);
    printf("\ntot_t= %g  time=%g", tot_t, time);   
    
}
