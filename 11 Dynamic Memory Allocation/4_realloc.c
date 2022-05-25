#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the value of %d element\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 2; i++)
        printf("The value of %d element is %d\n", i, ptr[i]);

    // Reallocate ptr using realloc()
    ptr = realloc(ptr, 5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
        printf("The value of %d element is %d\n", i, ptr[i]);

    return 0;
}