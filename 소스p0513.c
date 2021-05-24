#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a,b)(a)

int main() {
    char s[16] = "no pain no gain";
    int a[26];
    int len;
    int m;
    int i;
    for (i = 1; i <= 26; i++)a[i] = 0;
    int c;
    len = strlen(s);
    for (i = 0; i < len; i++) {
        c = s[i] - 'a' + 1;
        if (c >= 1 && c <= 26) a[c]++;
    }

    m = 0;
    for (i = 1; i <= 26; i++)
        if (a[i] > m) m = a[i];

    printf("m=%d ", m);
}


