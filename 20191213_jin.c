#include <stdio.h>

int main(){
	int num[10];
	int min=100,max=num[0],sum,avg,i;
	
	for(i=0;i<10;i++){
		printf("%d��° ������ �Է��ϼ���: ",i+1);
		scanf("%d",&num[i]);
		sum += num[i];
		
		if(max<num[i]) max=num[i];
		if(min>num[i]) min=num[i];
	}
	avg = sum/i;
	
	printf("�ְ�����: %d\n��������: %d\n����: %d\n�������: %d\n",max,min,sum,avg);
	
	return 0;
}
