#include <stdio.h>
#include <stdlib.h>

enum day { sun, mon, tue, wed, tru, fri, sat };
typedef enum day day;

day find_next_day(day d)
{
    return((day)d + 1) % 7));
}

int main()
{
    day cur_day = tue;
    char* d_name[] = { "��","ȭ","��","��","��","��","��" };
    printf("%s����\n", d_name[find_next_day(cur_day)]);
    }
}
