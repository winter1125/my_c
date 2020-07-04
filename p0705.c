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
    char* d_name[] = { "월","화","수","목","금","토","일" };
    printf("%s요일\n", d_name[find_next_day(cur_day)]);
    }
}
