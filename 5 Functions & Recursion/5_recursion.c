#include <stdio.h>
int factorial();

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}

int factorial(int x)
{
    printf("Calling factorial(%d)\n", x);
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}