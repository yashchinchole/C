#include <stdio.h>
int fib(int);

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    printf("%dth element of fibonacci series is %d", n, fib(n));
    return 0;
}

int fib(int i)
{
    if (i == 1)
        return 0;

    else if (i == 2)
        return 1;

    else
        return fib(i - 1) + fib(i - 2);
}