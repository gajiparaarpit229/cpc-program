#include<stdio.h>

void main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int i,arr[n],div3=0;
	
	
	for(i=0;i<n;i++){
		printf("enter a number to arr[%d]:",i);
		scanf("%d",&arr[i]);
		if(arr[i]%3 ==0){
			div3++;
			
		}	
	}
	printf("number is divisible by 3 in the array is %d",div3);
}
