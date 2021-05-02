#include <stdio.h>
#include <stdlib.h>

float time=0; //계산 시간
float tot=0;  // 계산시간의 합
float money=0; //받는 금액

float temp=0;

void main(){

float a[5]={16.0,17.0,18.5,22.5,19.5};
float b[5]={16.5,20.5,23.0,23.5,22.5};


for(int i=0; i<5; i++)
{
  temp=b[i]-a[i];

  printf("%g %g = %g \n", a[i], b[i], temp);

  if(temp <=1) { temp=0;}
  else if( temp >= 2 && temp <=5) {temp=temp-1;}
  else
  {
      temp=4;
  }
  tot=tot+temp;

 }
 printf("tot=%g\n", tot);


 if(tot>=15){ tot*=0.95*10000; }

 else if(tot<=5)
 {
     tot*=1.05*10000;
 }

 else
 {
     tot*=10000;
 }

 printf("money=%g", tot);

}

