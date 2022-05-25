#include <stdio.h>
void sumavg(float x, float y, float *sum, float *avg);

int main()
{
    float n1, n2, sum, avg;

    printf("Enter the numbers\n");
    scanf("%f %f", &n1, &n2);

    sumavg(n1, n2, &sum, &avg);
    printf("Sum of %.2f and %.2f is %.2f\n", n1, n2, sum);
    printf("Average of %.2f and %.2f is %.2f\n", n1, n2, avg);
    return 0;
}

void sumavg(float x, float y, float *sum, float *avg)
{
    *sum = x + y;
    *avg = *sum / 2;
}