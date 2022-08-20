#include <stdio.h> // ❓
void pattern(int);

int main()
{
    int n;
    printf("Enter the number of lines\n");
    scanf("%d", &n);
    pattern(n);
}
// How compilar will execute this function -> step by step
void pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    pattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}