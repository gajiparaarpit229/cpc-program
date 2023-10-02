#include <stdio.h>
int main()
{
    int x;
    printf("Enter Number that You want to Turn in Binary : ");
    scanf("%d", &x);
    while (x >= 1)
    {
        if (x % 2 == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        x = x / 2;
    }
    return 0;
}
