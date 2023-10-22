#include<stdio.h>

void main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int i,arr[n],temp;
	
	
	for(i=0;i<n;i++){
		printf("enter a number to arr[%d]:",i);
		scanf("%d",&arr[i]);
		}
	printf("enter element for search");
	scanf("%d",&temp);
	for(i=0;i<n;i++){
		if(arr[i]==temp){
			printf("entered search element is arr[%d]",i);
			
		}
		}
	
	}
	
