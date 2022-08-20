#include <stdio.h> // ❓

int main()
{
    float a = 1.3;
    float *c, *b;
    b = &a;
    b = c; // Order for use of b & c
    printf("%u - %u - %u\n", &a, b, c);
    printf("%f - %f - %f - %f - %f", a, *(&a), *&a, *b, *c);
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     float a = 13.5;
//     float *b, *c;
//     b = &a;
//     c = b;
//     printf("\n%u %u %u", &a, b, c);
//     printf("\n%f %f %f %f %f", a, *(&a), *&a, *b, *c);
//     return 0;
// }