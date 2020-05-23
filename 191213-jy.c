#include <stdio.h>

int main()
{
	int st[10];
	int i, max =0, min =100;
	int sum;
	int avg;
	
	for(i=0;i<10;i++){
		printf("%d번째 학생의 성적을 입력하시오:",i+1);
		scanf("%d",&st[i]);
		if(st[i]>100||st[i]<0){
			i--;
			continue;
		}
	sum += st[i];
	
	if(max<st[i])
		max=st[i];
	
	if(min>st[i])
		min=st[i];
	}
	
	avg=(double)sum/10;
	
	printf("10명의 학생중 최고 점수는: %d\n", max);
	printf("10명의 학생중 최저 점수는: %d\n",min);
	printf("10명의 학생들 평균점수는:%d\n",avg);
	printf("10명의 학생들 총점은:%d",sum);
	
	return 0;
}
