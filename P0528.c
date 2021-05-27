#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a,b)(a)
#define TABLE_SIZE 11

int hash_functin(int key)
{

    return key%TABLE_SIZE;

}

 void hash_chain_add(element item, struct list *ht[])
 {

     int hash_value=hash_function(item.key);
     struct list *ptr;
     struct list *node_before=NULL;
     *node=ht[hash_value];
     for(; node; node->before=node, node=node->link){
        if(node->item.key = item.key){
            fprintf("error");
            return ;
        }
     }
     ptr=(Struct list *)malloc(sizeof(struct list));
     ptr->item=item;
     ptr->link=NULL;
     if(node_before)
        node_before->link=ptr;
     else
        ht[hash_value]=ptr;

 }

 void hash_chain_search(element item, struct list *ht[])
 {
     struct list *node;
     int hash_value=hash_function(item.key);
     for(node=ht[hash_value]; node; node=node->link){
        if(node->item == item.key){
            printf("%d ", item.key);
            return ;
        }
     }
     printf("키를 찾지 못함 \n");
 }


 void hash_chain_search(element item, struct list *ht[])
 {

     struct list *node;
     int hash_value = hash_function(item.key);
     for(node = ht[hash_value]; node; node=node->link){
        if(node->item.key==item.key){
            printf("error");
            return ;
        }
     }
     printf("키를 찾지 못했습니다 \n");
 }
