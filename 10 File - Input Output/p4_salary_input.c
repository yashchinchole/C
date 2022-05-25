#include <stdio.h>

int main()
{
    FILE *a;
    a = fopen("tp4.txt", "w");

    int s1, s2;
    char n1[10], n2[10];

    printf("Enter the name of employees\n");
    scanf("%s %s", n1, n2);
    printf("Enter the salary of employees\n");
    scanf("%d %d", &s1, &s2);

    fprintf(a, "Name = %s <-> Salary = %d\n", n1, s1);
    fprintf(a, "Name = %s <-> Salary = %d\n", n2, s2);

    fclose(a);

    return 0;
}