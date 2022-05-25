#include <stdio.h>

int main()
{
    int arr[] = {23, 54, 84};
    int *ptr = &arr[0]; // Assign to the 0th element

    for (int i = 0; i < 3; i++)
    {
        printf("Element = %d and Address = %d\n", *ptr, ptr);
        ptr++;
    }
    return 0;
}