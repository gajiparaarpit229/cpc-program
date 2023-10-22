#include<stdio.h>

void main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int i,t;
	char s1[n];
	
	for(i=0;i<n;i++){
		printf("enter a number to s1[%d]:",i);
		scanf("%d",&s1[i]);
		}
		
    s1[100]=s1[n];
    puts(s1);

	printf("string length is :%d",strlen(s1));
	
	
	
	}
	

	
