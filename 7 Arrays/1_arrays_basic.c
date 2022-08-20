#include <stdio.h>

int main()
{
    int marks[4]; // Allocate space for 4 integers
    // marks[0] = 12;
    // marks[1] = 13;
    // marks[2] = 14;
    // marks[3] = 15;

    printf("Enter the marks of student 1 : ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of student 2 : ");
    scanf("%d", &marks[1]);
    printf("Enter the marks of student 3 : ");
    scanf("%d", &marks[2]);
    printf("Enter the marks of student 4 : ");
    scanf("%d", &marks[3]);

    printf("You have enterecd %d %d %d and %d marks", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}