#include <stdio.h>
void swap(int *a, int *b);
void wrong_swap(int a, int b);

int main()
{
    int x = 3, y = 4;
    printf("The value of x & y before swap is %d & %d\n", x, y);
    wrong_swap(x, y); // Will not work due to call by value
    printf("The value of x & y after wrong_swap is %d & %d\n", x, y);
    swap(&x, &y); // Will work due to call by reference
    printf("The value of x & y after swap is %d & %d\n", x, y);

    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}