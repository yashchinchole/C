#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    // One liner
    
    (a > 5) ? printf("%d is greater than 5", a) : printf("%d is less than 5", a);
    return 0;
}