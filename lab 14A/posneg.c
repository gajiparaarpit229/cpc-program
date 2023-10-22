#include<stdio.h>
int main(){
	int i,n,co=0,cot=0,cote=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<0)
		{
			co=co+1;
		}else if(arr[i]>0)
		{
			cot=cot+1;
		}else
		{
			cote=cote+1;
		}
	}
	printf("negative number %d positive number %d %d",co,cot,cote);
	return 0;
}
