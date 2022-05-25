#include <stdio.h>
float celTOfar(float);

int main()
{
    float c, farenheit;
    printf("Enter the temperature in celcius\n");
    scanf("%f", &c);

    printf("Temperature in farenheit is %f", celTOfar(c));
    return 0;
}

float celTOfar(float celcius)
{
    return (celcius * 9 / 5) + 32;
}