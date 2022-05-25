#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    do
    {
        printf("The number is %d\n", i);
        i++;
    } while (i <= n);

    return 0;
}