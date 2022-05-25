#include <stdio.h>

int main()
{
    float celcius, fahrenheit;
    fahrenheit = celcius * 9 / 5 + 32;
    printf("The temprature in celcius \n");
    scanf("%f", &celcius);

    printf("The temperature in fahrenheit %f \n", celcius * 9 / 5 + 32);
    // (0°C × 9/5) + 32 = 32°F
    return 0;
}