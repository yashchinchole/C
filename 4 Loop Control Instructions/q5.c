#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (int i = n; i < 100; i++)
    {
        printf("The value of i is %d\n", i);
        if (i == 10)
        {
            break;
        }
    }
    return 0;
}