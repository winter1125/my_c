#include<stdio.h>
#define SIZE 5
#define TABLE 10

typedef struct
{
    int key[KEY];
}element;

element hash_table[TABLE];



void init_table(element ht[])
{

    int i;
    for(i=0; i<TABLE;i++){
        ht[i].key[0]=NULL;
    }
}

int trans(char *key){

    int number=0;
    while(*key)
        number=31*number+*key++;
    return number;

}

while(*key)
    number=31*number+*key++;
return number;

}

int hash_function(char *key)
{

    return transform1(key)%TABLE;
}


void main(){
int data[SIZE]={8,1,9,6,13};
element e;

}
