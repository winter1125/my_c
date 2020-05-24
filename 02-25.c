#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    while(1)
    {
        scanf("%c",&c);
        if(c=='q')
        {
            printf("%c",c);
            break;
        }
        else if(c!=' ')
        {
            printf("%c\n",c);
        }
    }

return 0;

}
