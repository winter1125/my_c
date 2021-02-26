#include <stdio.h>
#include <stdlib.h>

struct class{
    char name[10];
    int kok,eng, mat;

};
/*
struct class s[4]={{"Jeon",95,80,100},
                    {"Kim",59,85,75},
                    {"Lee",90,100,75},
                    {"Bae",100,82,80}};
*/


int main()
{
    int name1;
    int n;
    scanf("%d", &n);
    struct class s[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s %d %d %d", &s[i].name, &s[i].kok, &s[i].eng, &s[i].mat);
    }

    int max=0;
    for(int i=0; i<n; i++)
    {
        if(max< s[i].kok){
                max=s[i].kok;
                name1=i;

    }



}
  printf("%s ", s[name1].name);

  int suk1[n];

  for(int i=0; i<n; i++)
  {
      suk1[i]=0;
  }

  int count1;
  for(int i=0; i<n; i++)
  {
      count1=0;
      for(int j=0; j<n; j++)
      {
          if(s[i].eng < s[j].eng) count1++;
      }
      suk1[i]=count1+1;
  }


  printf("%d ", suk1[name1]);

  int suk2[n];
  int count2;
  for(int i=0; i<n; i++)
  {
      count2=0;
      for(int j=0; j<n; j++)
      {
          if(s[i].mat < s[j].mat) count2++;
      }
      suk2[i]=count2+1;
  }
  printf("%d ", suk2[name1]);
}
