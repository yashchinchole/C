#include <stdio.h>
int sum(int, int);

int main()
{
    int x = 4, y = 7;
    printf("The value of 4 + 7 is %d\n", sum(x, y));
    printf("%d %d", x, y);
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    a = 3333, b = 4444;
    return c;
}