#include <stdio.h>
int change(int a);

int main()
{
    int a = 30;
    change(a);
    printf("The value of a %d\n", a);

    return 0;
}

int change(int b)
{
    b = 60;
    printf("%d\n", b);
}