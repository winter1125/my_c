#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    int num1;
    int soc[100];
    int des[100];

    int strike=0;
    int ball=0;


    scanf("%d %d", &soc, &num1);

    for(int i=0; i<num1; i++){
       scanf("%d", &des[i]) ;

    for(int j=0; j<3; j++)
    {
        if(soc[j]==des[j]){
        strike++;
       }
        for(int k=0; k<3; k++){
            if(j != k && soc[j]==des[k]){
              ball++;
            }
        }
    }

    if(strike == 0 && ball ==0){
        printf("OUT\n");
        continue;
    }
    if(strike>0){
        printf("%dS\n",strike);
       if(strike == 3){
        printf("\n SUCESS");
        return 1;
       }
    }

    if(ball>0){
        printf("%dB\n",ballcount);
          }
          printf("\n");
    }
printf("FALL\n");
return -1;
}

