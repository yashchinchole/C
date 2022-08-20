#include <stdio.h>

typedef struct complex
{
    int real;
    int complex;
} com;

void display(com a)
{
    printf("The value of real part is %d\n", a.real);
    printf("The value of complex part is %d\n", a.complex);
    printf("***---***---***\n");
}

int main()
{
    com num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d number\n", i + 1);
        scanf("%d", &num[i].real);

        printf("Enter the complex value for %d number\n", i + 1);
        scanf("%d", &num[i].complex);
    }

    for (int i = 0; i < 5; i++)
    {
        display(num[i]);
    }

    return 0;
}