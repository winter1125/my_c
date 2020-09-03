#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdlib.h>


void  main(){
  char *d="pass wsa ";
  //char s[10]="ok!";
  //char *s=malloc(sizeof(char)*20);
  //strcpy(s,"hihi");
  //char *s="jiji";
  char str[]="best effort";
  int a,b;
  b=sizeof(str);
  a=strlen(str);
  //strcat(s,d);
  printf("%d\n", a);
  printf("sizeof=%d\n", b);
    }

