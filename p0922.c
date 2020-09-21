#include<stdio.h>
#include <stdlib.h>
#define N 7
static int ht[N];

hash_f(int a)
{
	return(a % 7);
}

hash_f2(int b)
{
	return(5 - (b % 5));
}

void add(int item)
{
	int i, hashvalue, inc;
	i = hashvalue = hash_f															(item);
	inc = hash_f2(item);
	while (ht[i] != 0)
	{
		if (item == ht[i]){
		printf("....\n");
		exit(1);
}
i = (i + inc) % N;
if (i == hashvalue) {
	printf("...aaaa\n");
	exit(1);
 }
	}
	ht[i] = item;
}


int main() {

	int i;
	add(8);
	add(1);
	add(9);
	add(6);
	add(13);
	add(12);
	for (i = 0; i < N; i++)
		printf("%d ", ht[i]);
}

