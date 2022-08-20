#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    GoodMorning();
    return 0;
}

void GoodMorning()
{
    printf("Good Morning YASH\n");
    GoodAfternoon();
}
void GoodAfternoon()
{
    printf("Good Afternoon YASH\n");
    GoodNight();
}
void GoodNight()
{
    printf("Good Night YASH\n");
}