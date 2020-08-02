#include <stdio.h>
#include <stdlib.h>
//#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

struct a_tag {
	char* x;
	char* y;
	struct a_tag* sp;


}v[] = {
	{"ABC", "DEF", v + 1},
{ "GHI","JKL",v + 2 },
{ "MNO","PQR",v } }
;
struct a_tag  *ptr = v;

	;
main() {
	printf("%s\n", v[0].sp->x);
	printf("%s\n", ptr->sp->y);
	printf("%s\n", ptr->sp->sp->y);
	printf("%s\n", ++(++ptr)->sp->x);
}