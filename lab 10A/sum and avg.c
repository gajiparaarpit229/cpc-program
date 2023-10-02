#include<stdio.h>
	void main()
	{
		int n,i=0;
		float avg=0,sum=0;
		printf("if you put 0 so sum of num and avg will not execute any more");
		scanf("%d",&n);
		while(n!=0)
		{
			sum=sum+n;
			i=i+1;
			scanf("%d",&n);
		}
		avg=sum/i;
		printf("%f",sum);
		printf("%f",avg);
	}
