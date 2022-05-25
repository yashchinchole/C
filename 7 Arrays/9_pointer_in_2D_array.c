#include <stdio.h> // ❓❓

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
        printf("\n");

        for (int j = 0; j < 3; j++)
            printf("%d", ptrint[j]);
    }
    return 0;
}