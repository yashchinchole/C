#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a \n");
    scanf("%d", &a);

    printf("Enter value of b \n");
    scanf("%d", &b);

    printf("The sum of a and b is %d \n", a + b);
    printf("The difference of a and b is %d \n", a - b);
    printf("The multiplication of a and b is %d \n", a * b);
    return 0;
}