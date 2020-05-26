#include <stdio.h>

void mt()
{
	int mt[5][5];
	int num = 1, de =1, max =5;
	int i=0,j=-1;
	
	int p,q;
	
	while(1){
		for(p=0;p<max;p++){
			j=j+de;
			mt[i][j]=num;
			num++;
		}
	
	max--;
	
	if(max<0) break;
	
	for(p=0;p<max;p++){
		i=i+de;
		mt[i][j]=num;
		num++;
	}
	
	de=-de;
	}
	
	for(p=0;p<5;p++){
		for(q=0;q<5;q++){
			printf("%d \t", mt[p][q]);
		}
		printf("\n");
	}
}
int main()
{
	mt();
	
	return 0;
}
