#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
int key;
}element;

typedef struct{
element heap[MAX];
int heap_size;
}HeapType;


HeapType *creaye()
{

    h->heap_size =0;
}


void insert_max_heap(HeapType *h, element item)
{


    int i;
    i=++(heap_size);

    while((i!=1) && (item.key > h->heap[i/2].key)){
        heap[i].key=heap[i/2].key;
        i=i/2;

    }

    h->heap[i]=item;
}

element delete_max_heap(HeapType *h)
{
    int parent, child;
    element item, temp;

    item=h->heap[1];
    temp=h->heap[(h->heap_size)--];
    parent=1;
    child=2;

    while(child <= h->heap_size)
    {

        if((child< h->heap_size) && (h->heap[child].key < h->heap[child+1].key)
           child++;
           if(temp.key >= h->heap[child].key) break;
            h->heap]parent]=h->heap[child];
        parent=child;
        child*=2;
    }


    h->heap[parent]=h->heap[child];
    parent=child;
    child*=2;

}


int main()
{
    element e1={10},e2={5}, e3={30};
    element e4,e5,e6;
    HeapType *heap;

    heap=create();
    init(heap);

    insert_max_heap(heap,e1);
    insert_max_heap(heap,e2);
    insert_max_heap(heap,e3);

    e4=delete_max(heap,e1);
    printf(">%d>", e4.key);
    d5=delete_max_heap(heap,e2);
    printf(">%d>", e4.key);
    d6=delete_max_heap(heap, e3);
    printf(">%d>", e4.key);

    free(heap);
    return 0;


}
