#include <stdio.h>


	int number=5;
	int data[]={1, 10, 5, 8, 7};
	
	void show(){
		int i;
		for(i=0;i<number;i++){
			printf("%3d", data[i]);
		}
		printf("\n");
	}	
	void quick(int* data, int start, int end){
		if(start>=end){
			return;
		}
		int key=start;
		int i=start+1, j=end, temp;
		
		while(i<=j){
			while(i<=end && data[i]<=data[key]){
				i++;
			}
			while(j>start && data[j]>=data[key]){
				j--;
			}
			if(i>j){
				temp=data[j];
				data[j]=data[key];
				data[key]=temp;
			}else {
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
		quick(data, start, j-1);
		quick(data, j+1, end);

	}
	
int main()
{
	show();
	quick(data, 0, number-1);
	show();
	return 0;
}
