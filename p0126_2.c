#include<stdio.h>
#define KEY 10
#define TABLE 13

typedef struct{

    char key[KEY];
}element;

element hash_table[TABLE];

void init_table(element ht[])
{
    int i;
    for(i=0; i<TABLE;i++){
        ht[i].key[0]=NULL;
    }
}

void transform(char *key)
{
    int number=0;
    while(*key)
        number=number+*key++;
    return number;
}

int hash_function(char *key)
{
    return transform(key)%TABLE;
}


void hash_lp_print(element ht[])
{
    int i;
    printf("====================\n");
    for(i=0;i<TABLE;i++)
        printf("[%d] %d \n", i, ht[i].key);
    printf("==================\n");
}


int main(void){

    char *s[7]={"do","for","if","cas","else","return","function"};
    element e;

    for(int i=0; i<7;i++)
    {
        strcpy(e.key,s[i]);
        hash_lp_add(e, hash_table);
        hash_lp_print(hash_table);
    }

    for(int i=0; i<7; i++)
    {
        strcpy(e.key.s[i]);
        hash_lp_search(e,hash_table);
    }

    return 0;
}
