#include<stdio.h>

void main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int i,arr1[n],arr2[n],negnum=0;
	
	
	for(i=0;i<n;i++){
		printf("enter a number to arr1[%d]:",i);
		scanf("%d",&arr1[i]);
		arr2[i]=arr1[i];
		}	
	 for(i=0;i<n;i++){
		printf("number in arr2[%d]:%d \n",i,arr2[i]);
		
		}
	}

