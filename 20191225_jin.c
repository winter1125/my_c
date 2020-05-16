#include <stdio.h>
#include <stdlib.h>

int des(int arr[], int a);

int main(){
	int a,i;
	int arr[a];
	
	printf("배열의 크기를 입력하고 정렬할 숫자를 입력하세요 ");
	scanf("%d",&a); 
	
	for(i=0; i<a; ++i){
		scanf("%d",&arr[i]);
	}
	
	des(arr,a);
	for(i=0; i<a; i++){
		printf("%d",arr[i]);
	}
	return 0;
}

int des(int arr[], int a){
	int i,j,tmp;
	
	for(i=0; i<a; i++){
		for(j=1; j<a; j++){
			if(arr[j-1] < arr[j]){
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
			
		}
			
	}
}
