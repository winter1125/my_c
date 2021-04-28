#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//char str[100];
char str[10] = "WWWBBWBWW";
void f(int p, int k)
{


	if (p >= strlen(str)) return;

	if (str[p + 1] == str[p]) f(p + 1, k + 1);
	else

	{
		if (k == 1) printf("%c ", str[p]);
		else printf("%d %c ", k, str[p]);
		f(p + 1, 1);
	}
}

int main()
{
	//scanf("%s", str);
	

	f(0, 1);
}
