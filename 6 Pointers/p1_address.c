#include <stdio.h>

int main()
{
    int n;
    int *a = &n;

    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Address of %d is %u\n", n, a);

    printf("The value of variable is %d\n", *&n);
    return 0;
}