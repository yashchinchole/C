#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vec;

int main()
{
    vec v1, v2;

    v1.x = 33;
    v1.y = 53;
    printf("X dimension of v1 %d\nY dimension of v1 %d\n", v1.x, v1.y);

    v2.x = 21;
    v2.y = 37;
    printf("X dimension of v2 %d\nY dimension of v2 %d\n", v2.x, v2.y);

    return 0;
}