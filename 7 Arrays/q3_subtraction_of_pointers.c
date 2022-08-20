#include <stdio.h>

int main()
{
    int arr[] = {44, 73, 25, 82, 19};

    // pointer + number = pointer
    // pointer - number = pointer
    // pointer - pointer = number

    int *x = &arr[1];
    int *y = &arr[4];
    printf("x = %u and y = %u\n", &arr[1], &arr[4]);
    printf("The value of y - x is %d\n", y - x);
    return 0;
}