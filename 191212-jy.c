//난수 5개를 생성하여 2진수로 출력//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a[20];
	int b, num, mok, nmg, i, j;
	
	srand(time(NULL));
		
	for(i=0; i<5; i++){
		num = rand();
		printf("%d -> ",num);
		b = -1;
		
		do{
			b++;
			mok = num/2;
			nmg = num%2;
			a[b] = nmg;
			num = mok;
		}while(mok!=0);
		for(j=b; j>=0; j--){
			printf("%d",a[j]);
		}
		printf("\n");
	}
	
	return 0;
}
