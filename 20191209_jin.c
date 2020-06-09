#include <stdio.h>

#define max 7

int main(){
	int i,j;
	
	for(i=0;i<max;i++){
		if(i<max/2+1){
			for(j=0;j<max;j++){
				if(j<i || max-i<=j)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
		else{
			for(j=0;j<max;j++){
				if(max-i-1>j || i<j)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
