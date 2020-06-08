#include <stdio.h>

int main(){
	int num[10];
	int min=100,max=num[0],sum,avg,i;
	
	for(i=0;i<10;i++){
		printf("%d번째 성적을 입력하세요: ",i+1);
		scanf("%d",&num[i]);
		sum += num[i];
		
		if(max<num[i]) max=num[i];
		if(min>num[i]) min=num[i];
	}
	avg = sum/i;
	
	printf("최고점수: %d\n최저점수: %d\n총점: %d\n평균점수: %d\n",max,min,sum,avg);
	
	return 0;
}
