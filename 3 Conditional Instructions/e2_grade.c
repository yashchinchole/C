#include <stdio.h> //❓

int main()
{
    int marks;
    printf("Enter your marks (0-100) \n");
    scanf("%d",&marks);

    switch (marks)
    {
        case 1 : printf("Your marks are %d ,marks \n --> Grade is A");
        break;
    }
    return 0;
}