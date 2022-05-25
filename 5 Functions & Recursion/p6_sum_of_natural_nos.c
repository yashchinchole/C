#include <stdio.h>
int sum(int);

int main()
{
    int i;
    printf("Enter the number\n");
    scanf("%d", &i);

    printf("Sum of first %d natural numbers is %d", i, sum(i));
    return 0;
}

int sum(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 3;
    else
        return n + sum(n - 1);
}