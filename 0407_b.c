#include <stdio.h>
#include <stdlib.h>

int main()
{    int a,b,c;
    freopen("input.txt","r",stdin);
    int gcd=0;
    scanf("%d %d %d", &a, &b,&c);
  for(int i=1; i<1000; i++)
  {
      if(a%i==0) {
          if(b % i==0){

            if(c % i==0){
                if(gcd<i){
                    gcd=i;
                }

            }
          }
  }

}
printf("%d", gcd);
}
