#include <stdio.h>

int main()
{
    int num[] = {11, 21, 31, 41, 51};

    for (int i = 0; i < 5; i++)
    {
        printf("Address = %u <====> ", &num[i]);
        printf("Element = %d, %d, %d, %d\n", num[i], *(num + i), *(i + num), i[num]);
    }
    return 0;
}