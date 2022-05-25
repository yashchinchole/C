#include <stdio.h>
void table(int *mulTable, int num)
{
    printf("Table of %d\n\n", num);
    for (int i = 0; i < 10; i++)
    {
        mulTable[i];
        mulTable[num] = num * (i + 1);
        printf("%d\n", mulTable[num]);
    }
    printf("------------*--------------------*-------------------*--------------\n\n");
}

int main()
{
    int mulTable[3][10];
    int a, b, c;
    printf("Enter the Table numbers you require\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("\n\n");

    table(*mulTable, a);
    table(*mulTable, b);
    table(*mulTable, c);

    return 0;
}