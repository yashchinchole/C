#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    // for (i = 1; i <= n; i++)  --> {by FOR LOOP}

    // while (i <= n)            --> {by WHILE LOOP}
    // {
    //     sum += i;
    //     i++;
    // }
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("Sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}