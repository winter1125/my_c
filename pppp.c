#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdlib.h>

void main(){
int x[4][3]={2,4,8,10,12,14,16,18,20,22,24,26};
int (*p)[3];

p=&x[1];

printf("%5d",(*p)[5]);

}
