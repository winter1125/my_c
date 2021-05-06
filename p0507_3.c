#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  a[5] = { 16.0,17.0,18.5,22.5,19.5 };
    float  b[5] = { 16.5,20.5,23.0,23.5,22.5 };

    float s, e, time, tot_time = 0, sum = 0, t, money=0;
    for (int i = 1; i < 5; i++) {
        time = b[i] - a[i] - 1;

        if (time > 4) time = 4;
        if (time < 0) time = 0;

        money = money + (time / 0.5 * 5000);
        tot_time = tot_time + time;
        printf("%g %g %g \n", a[i], b[i], time);
    }

        if (tot_time <= 5) money = money * 1.05;
        if (tot_time >= 15) money = money * 0.95;
       
        printf("%g\n", money );
    };
   