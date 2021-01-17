#define N 5
typedef struct node *NODE;

struct node{

    int w;
    NODE lc,rc;
    NODE next;
  };

NODE list=NULL;

//리스트에서 가중치가 가장 작은 노드를 가져 오는 함수

NODE least()
{
    NODE t;
    if(list==NULL)
        return NULL;
    t=list;
    list=list->next;
    return t;
}

//리스트에 원소 트리를 가중치 순서에 맞게 삽입라는 함수

void insert(NODE t){

    NODE pt,old;
    if(list == NULL || t->w < list->w){
        t->next=list;
        list=t;

    }else{
    old=list;
    pt=old->next;
    while(pt != NULL && pt->w < t->w){
        old=pt;
        pt=pt->next;

    }

  t->next=pt;
  list->next=t;
    }
}

int main(){
    int i;
    NODE pt;
    init();
    for(i=1; i<N; i++){
        pt=newnode();
    pt->lc=least();
    pt->rc=least();
    pt->w=(pt->lc)->w + (pt->rc)->wc;
    insert(pt);
}

return 0;

}



