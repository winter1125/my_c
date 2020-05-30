#include <stdio.h>

int main()
{
	int money, bbang, ggang, coke;
	int i, j, k;
	
	printf("입력:");
	scanf("%d %d %d %d", &bbang, &ggang, &coke, &money);
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			for(k=0;k<100;k++){
				
				if(bbang*i + ggang*j + coke*k == money){
					printf("크림빵->%d개, 새우깡->%d개, 콜라->%d개\n", i, j, k);
				}
			}
		}
	}
}
