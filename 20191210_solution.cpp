#include <stdio.h>

int main(){
	int a[5][5];
	int num=1, x=0, y=0;
	int i,j,k,s=1,size=5;
	
	for(k=0; k<size; ++k){
		a[y][x] = num++;
		x += s;
	}
	x -= 1;
	for(i=size-1; i>0; --i){
		for(j=0; j<i; ++j){
			y += s;
			a[y][x] = num++;
		}
		s *= -1;
		for(k=0; k<i; ++k){
			x +=s;
			a[y][x] = num++;
		}
	}
	
	for(int i=0; i<size; ++i){
		for(int j=0; j<size; ++j){
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
