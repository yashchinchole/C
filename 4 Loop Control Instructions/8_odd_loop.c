#include <stdio.h>

int main()
{
    int n;
    char another = 'Y';

    while (another == 'Y')
    {
        printf("Enter the number\n");
        scanf("%d", &n);
        printf("Square of %d is %d\n", n, n * n);

        printf("Want to enter another number Y/N\n");
        fflush(stdin);
        scanf("%c", &another);
    }
    return 0;
}