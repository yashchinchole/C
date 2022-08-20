#include <stdio.h>
int change(int *);

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The value of variable before change is %d\n", n);
    change(&n);
    printf("The value of variable after change is %d\n", n);
    return 0;
}

int change(int *a)
{
    *a *= 10;
}