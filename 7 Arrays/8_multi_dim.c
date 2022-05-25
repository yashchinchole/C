#include <stdio.h>

int main()
{
    int Nstudents = 2, Nsubjects = 2;
    int marks[2][2];
    for (int i = 0; i < Nstudents; i++)
    {
        for (int j = 0; j < Nsubjects; j++)
        {
            printf("Enter the marks of student %d in subject %d ==> ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < Nstudents; i++)
    {
        for (int j = 0; j < Nsubjects; j++)
        {
            printf("Marks of student %d in subject %d is ==> %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}