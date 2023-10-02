#include<stdio.h>
void main()
{
	int n,i=1,con=1;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n=n/10)
		{
			con=con+1;
		}
	}
	printf("%d",con);
}
