#include <stdio.h>

struct book 
{
    char name[8];
    int pages; 
    float prize;
};

int main()
{
    struct book c = {"C", 464, 330};

    printf("Address of Name = %u\n", &c.name);
    printf("Address of Pages = %u\n", &c.pages);
    printf("Address of Prize = %u\n", &c.prize);

    printf("Book name = %s *** Number of pages = %d *** Prize = %.2f\n", c.name, c.pages, c.prize);

    return 0;
}