#include<stdio.h>
#include<string.h>
#include<math.h>

void main()
{
    int sum = 0, count = 0, ind = 0;
    char str[100];
    gets(str);
    char tot[100];
    int inc=0;

    int jj=0;
    int i=0;
    while(str[i] != NULL){
    tot[jj]=str[i];
    if(str[i] == ' '){
    i++; continue;}
    i++;
    jj++;
    }

     int len=strlen(tot);
     for (i = 0; i < len; i++) {
		if (tot[i] >= '0' & tot[i] <= '9')
			count++;
		if (count == 3) {
			if (ind != 0) printf("+");
			for (int j = ind; j <= i; j++){
                if (tot[j]!=' ') {
                    printf("%c", tot[j]);
					sum += (tot[j] - '0') * pow(10, count-- - 1);
				}
			}
			ind = i + 1;
		}
	}
	printf("=%d", sum);
}

