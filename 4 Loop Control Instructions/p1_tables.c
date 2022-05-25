#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d multiply %d is %d\n",n,i, i * n);
        i++;
    }
    return 0;
}