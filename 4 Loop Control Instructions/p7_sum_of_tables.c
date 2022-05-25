#include <stdio.h>

int main()
{
    int n, i, a, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        a = n * i;
        sum += a;
    }
    printf("%d", sum);

    return 0;
}