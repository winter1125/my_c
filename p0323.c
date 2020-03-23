#include <stdio.h>

int main() {

    int num1, num2;
    freopen("input.txt","r",stdin);
    scanf("%d%d", &num1, &num2);
    int arr[1000];
    for(int i=0;i<num1;i++) scanf("%d", &arr[i]);

    int i=0, j=0;
    int sum=arr[0], count=0;
    for(;i!=num1-1;){

    	if(j>=num1-1){
    		sum-=arr[i++];
    		if(sum==num2) ++count;
    		continue;
    	}

    	if(sum<num2){
			sum+=arr[++j];
    	}

    	if(sum>num2){
    		sum-=arr[i++];
    	}

    	if(sum==num2){
    		++count;
		sum+=arr[++j];
    	}
    }

    printf("%d", count);

    return 0;
}
