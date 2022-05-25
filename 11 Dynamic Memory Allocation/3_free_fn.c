#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    for (int i = 0; i < 600000; i++)
    {
        ptr = (int *)malloc(600000 * sizeof(int));

        printf("Enter the value of %d element\n", i);
        scanf("%d", &ptr[i]);

        free(ptr);
    }
    for (int i = 0; i < 600000; i++)
        printf("The value of %d element is %d\n", i, ptr[i]);

    return 0;
}