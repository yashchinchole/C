#include <stdio.h> // ❓❓
#include <stdlib.h>

int main()
{
    int marks[3][2] = {{1, 43},
                       {2, 46},
                       {3, 49}};

    int(*ptr)[2];
    int *ptrint;

    for (int i = 0; i < 3; i++)
    {
        int *ptr = &marks[i];
        ptrint = (int *)ptr;

        for (int j = 0; j < 2; j++)
            printf("%d ", ptrint[j]);
        printf("\n");
    }
    return 0;
}