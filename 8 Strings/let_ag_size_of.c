#include <stdio.h>

int main()
{
    int b;
    printf("Enter the number\n");
    scanf("%d", &b);

    printf("%d %d %d\n", sizeof(b), sizeof('b'), sizeof("b"));

    return 0;
}