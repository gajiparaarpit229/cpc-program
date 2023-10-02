#include<stdio.h>
void main()
{
	int n,i=1,con=0;
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			con=con+1;
		}
		i++;
	}
		if(con==2)
			{
				printf("no is prime");
			}
		else
		{
			printf("no is not a prime");
		}
}
