#include <stdio.h>
#include<stdlib.h>


#define N 5
typedef struct node* NODE;

struct node {
	int w;
	NODE lc, rc;
	NODE next;
};
NODE list = NULL;

NODE least() {
	NODE t;
	if (list == NULL)
		return NULL;
	t = list;
	list = list->next;
	return t;
}

void insert(NODE t)
{
	NODE pt, old;
	if (list == NULL || t->w < list->w) {
		t->next = list;
		list = t;
	}
	else
	{
		old = list;
		pt = old->next;
		while (pt != NULL && pt->w < t->w) {
			old = pt;
			pt = pt->next;
		}
		old->next = t;
		t->next = pt;
	}
}

int main(void) {
	int i;
	NODE pt;
	//init();
	for (i = 1; i < N; i++) {
		pt = newnode();
		pt->lc = least();
		pt->rc = least();
		pt->w = (pt->lc)->w + (pt->rc)->w;
		insert(pt);
	}
	return 0;
}





