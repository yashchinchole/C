#include <stdio.h>
void display(int marks[2][3], int, int);

int main()
{
    int marks[2][3];
    display(marks, 2, 3);
    return 0;
}

void display(int marks[2][3], int row, int column)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the marks of student %d in subject %d ==> ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d - %d ==> %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
}