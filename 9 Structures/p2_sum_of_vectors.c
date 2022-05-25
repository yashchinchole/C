#include <stdio.h>

typedef struct vector
{
    int x, y;
} vec;

vec sumVector(vec a, vec b)
{
    vec result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
};

int main()
{
    vec v1, v2, sum;

    v1.x = 10;
    v1.y = 20;
    printf("X dimension of v1 %d & Y dimension of v1 %d\n", v1.x, v1.y);

    v2.x = 40;
    v2.y = 80;
    printf("X dimension of v2 %d & Y dimension of v2 %d\n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("Sum of X dimension is %d & Sum of Y dimension is %d\n", sum); // 2 format specifier and 1 variable
    // printf("Sum of X dimension is %d & Sum of Y dimension is %d\n", sumVector(v1, v2));

    return 0;
}