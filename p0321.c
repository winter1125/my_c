#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct s1 {
        char c[5], * s;
    }s1 = { "comp", "test" };

    struct s2 {
        char* cp;
        struct s1  ss1;
    } s2 = { "math", {"hong", "park"} };

    printf("%c\t%c\n", s1.s[0], *s1.s);
    printf("%s\t%s\n", s1.c, s1.s);
    printf("%s\t%s\n", s2.cp, s2.ss1.s);
    printf("%s\t%s\n", ++s2.cp,++s2.ss1.s);
}
