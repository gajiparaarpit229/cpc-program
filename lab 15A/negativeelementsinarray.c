#include<stdio.h>
void main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int i,arr[n],negnum=0;
	
	
	for(i=0;i<n;i++){
		printf("enter a number to arr[%d]:",i);
		scanf("%d",&arr[i]);
		if(arr[i]<0){
			negnum++;
			
		}	
	 printf("negative number in the array is %d",negnum);
	}
}
