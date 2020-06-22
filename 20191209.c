#include <stdio.h>
#include <stdlib.h>



main(){
	
	int a=0, z=10;
	int i,j;
	for(i=0;i<9;i++){
		if(i<10/2){
			a=i, z--;
		}
		else{
			a--,z++;
		}
		
	for(j=a;j>0;j--){
		printf(" ");
	}
	
	for(j=a; j<z;j++){
		printf("*");
		
	}
	
	printf("\n");
	}
}

