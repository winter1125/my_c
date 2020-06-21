#include <stdio.h>

int main(){
	int m=0,b,s,c;
	
	for(b=0; b<100; b++){
		for(s=0; s<100; s++){
			for(c=0; c<100; c++){
				m = (5*b)+(7*s)+(4*c);
							
				if(m==350) 
					printf("农覆户-> %d \n货快兵-> %d \n妮扼-> %d \n\n",b,s,c);
				else
					continue;	
				
			}
		}
	}
	
}
