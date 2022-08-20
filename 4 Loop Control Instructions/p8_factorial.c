#include <stdio.h>

int main()
{
    int n, i = 1, factorial = 1;
    printf("Enter the number\n");
    scanf("%d", &n);

    // for (i; i <= n; i++)
    // {
    //     factorial *= i;
    // }
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is %d", n, factorial);

    return 0;
}