#include <stdio.h>

typedef struct date
{
    int date, month, year;
} date;

void display(date d)
{
    printf("Date is : %d/%d/%d\n", d.date, d.month, d.year);
}

int dateCmp(date a, date b)
{
    if (a.year > b.year)
        return 1;
    if (a.year < b.year)
        return -1;

    if (a.month > b.month)
        return 1;
    if (a.month < b.month)
        return -1;

    if (a.date > b.date)
        return 1;
    if (a.date < b.date)
        return -1;
}

int main()
{
    date d1 = {14, 07, 2003};
    date d2 = {13, 11, 2021};

    display(d1);
    display(d2);

    int result = dateCmp(d1, d2);

    if (result == 1)
        printf("d2 is old than d1\n");
    else if (result == -1)
        printf("d1 is old than d2\n");
    else
        printf("d1 & d2 are same\n");
    return 0;
}