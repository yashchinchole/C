#include <stdio.h>

typedef struct book
{
    int pages;
} c;

int main()
{
    c b;
    c *p;
    p = &b;

    // (*p).pages = 476;
    // printf("Number of pages = %d\n", (*p).pages);

    p->pages = 476;
    printf("Number of pages = %d\n", p->pages);

    return 0;
}