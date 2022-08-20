#include <stdio.h>

int main()
{
    int arr[] = {44, 73, 25, 82, 19};

    printf("%u\n", &arr[0]);
    printf("%u\n", &arr[1]);
    printf("%u\n", &arr[2]);
    printf("%u\n", &arr[3]);
    printf("%u\n", &arr[4]);

    int *p = &arr[4];
    int *q = (arr + 4); // arr = &arr[0]
    printf("p = %d and q = %d\n", p, q);

    if (p == q)
        printf("The two pointers point to the same location\n");
    else
        printf("The two pointers point to the different locations\n");

    return 0;
}