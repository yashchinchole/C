#include <stdio.h>

int main()
{
    int i = 4, *j, *k;
    j = &i;
    k = &i;
    printf("The value of j, k before change is %d, %d\n", j, k);
    j += 1;
    k -= 1;
    printf("The value of j, k after change is %d, %d\n", j, k);

    return 0;
}