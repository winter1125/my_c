#include <stdio.h>

int main()
{
	int st[10];
	int i, max =0, min =100;
	int sum;
	int avg;
	
	for(i=0;i<10;i++){
		printf("%d��° �л��� ������ �Է��Ͻÿ�:",i+1);
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
	
	printf("10���� �л��� �ְ� ������: %d\n", max);
	printf("10���� �л��� ���� ������: %d\n",min);
	printf("10���� �л��� ���������:%d\n",avg);
	printf("10���� �л��� ������:%d",sum);
	
	return 0;
}
