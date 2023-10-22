#include <stdio.h>
int main()
{
    int n, i, countofodd=0, countofeven=0;
    printf("Enter Value Of Array[n]");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            countofeven++;
        }
        
        else
        {
            countofodd++;
        }
    }
    printf("Even Numbers count in array is %d\n", countofeven);
    printf("Odd Numbers count in array is %d\n", countofodd);
    return 0;
}
