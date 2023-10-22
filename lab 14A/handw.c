#include <stdio.h>
int main()
{
    int i,n,h[n],w[n],count=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter Hieght of %d",h[i]);
        scanf("%d",h[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("Enter Weight of %d",w[i]);
        scanf("%d",&w[i]);
    }
    for (i=0;i<n;i++)
    {
        if (h[i] > 170 && w[i] < 50)
        {
            count = count + 1;      
        }
    }
    printf("%d",count);
    return 0;
}