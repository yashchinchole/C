#include <stdio.h>
// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i + 1, *ptr);
//         ptr++; // Increment pointer to point to next
//     }
// }
void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 111; // This value will be changes in (arr) array of main as well
}

int main()
{
    int arr[] = {23, 16, 75, 38, 63, 91};
    printArray(arr, 6);
    printf("%d", arr[2]);
    return 0;
}