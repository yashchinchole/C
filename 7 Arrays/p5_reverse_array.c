#include <stdio.h>
void reverse(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++) // ❓
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %d element is %d\n", i + 1, arr[i]);
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);

    return 0;
}