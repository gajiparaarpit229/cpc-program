#include <stdio.h>

int main()
{
    int n, rev = 0, rem, number;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Return a non-zero value to indicate an error.
    }

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    while (rev != 0)
    {
        number = rev % 10;
        switch (number)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        default:
            printf("Nine ");
            break;
        }

        rev /= 10;
    }

    printf("\n");

    return 0;
}
