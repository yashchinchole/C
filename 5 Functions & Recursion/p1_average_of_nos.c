#include <stdio.h>
float average(float a, float b, float c);

int main()
{
    float n1, n2, n3;
    printf("Enter the numbers\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("The average of %f %f %f is %f", n1, n2, n3, average(n1, n2, n3));
    return 0;
}

float average(float a, float b, float c)
{
    float x;
    x = (a + b + c) / 3;
    return x;
}