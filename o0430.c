#include <stdio.h>
#include <stdlib.h>

float diff;
float sum=0;
int main()
{
   float a[5]={16.0,17.0,18.5,22.5,19.5};
   float b[5]={16.5,20.5,23.0,23.5,22.5};

       for(int j=0; j<5; j++)
       {

           diff=b[j]-a[j];
           printf("%g  %g = %g\n", b[j], a[j], diff);



           if(diff <=1)
           {

               diff=0;
           }

          else if(diff<=5 && diff>1){
            diff=diff-1;

          }
          else
          {
              diff=4;
          }

          sum=sum+diff;
       }
       printf("sum=%g", sum);



       if(sum>=15)
       {
           sum*=(0.95*10000);
       }
       else if(sum<=5)
       {
           sum*=(1.05*10000);
       }
       else
       {
           sum*=(10000);
       }

       printf("\nsum=%g", sum);
   }


