#include <stdio.h>

int Positivecount(int *arr, int n)
{
    int pos = 0;
    for (int i = 0; i < 12; i++)
    {
        if (arr[i] > 0)
            pos++;
    }
    return pos;
}

int Negativecount(int *arr, int n)
{
    int neg = 0;
    for (int i = 0; i < 12; i++)
    {
        if (arr[i] < 0)
            neg++;
    }
    return neg;
}

int main()
{
    int arr[] = {-6, 6, -1, 1, -7, 7, -3, 3, -5, 5, 0, 9};
    int n = sizeof(arr);
    Positivecount(arr, n);

    printf("Count of Positive elements = %d\n", Positivecount(arr, n));
    printf("Count of Negative elements = %d\n", Negativecount(arr, n));
    return 0;
}