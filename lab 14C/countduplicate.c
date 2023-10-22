#include <stdio.h>

int main()
{
    int i, j, size, count = 0;
    int arr[size];

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {

            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in the array = %d", count);

    return 0;
}
