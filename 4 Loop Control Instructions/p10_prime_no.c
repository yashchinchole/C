#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("This is not a prime number");
            break;
        }
    }

    if (i == n)
        printf("This is a prime number");

    return 0;
}