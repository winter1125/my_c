#include <stdio.h>
#include <stdlib.h>

float sum=0;
float tot=0;

void main(){

float a[5]={16.0,17.0,18.5,22.5,19.5};
float b[5]={16.5,20.5,23.0,23.5,22.5};


for(int i=0; i<5; i++)
{
    sum=(b[i]-a[i]);


//printf("%g", sum);

if(sum <=1 ){sum=0;}
else if(sum >=2 && sum<=5) {sum=sum-1;}
else {sum=4;}



tot=tot+sum;
}

if(tot>=15){ tot=tot*(0.95*10000);}
else if(tot<=5) { tot=tot*(1.05*10000);}
else
    tot=tot*10000;
printf("\n tot=%g", tot);
}

