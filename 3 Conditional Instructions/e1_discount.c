#include <stdio.h>

int main()
{
    float dis, qty, rate, tot;

    printf("Enter quantity and rate\n");
    scanf("%f %f", &qty, &rate);

    if (qty >= 1000)
    {
        dis = 10;
    }
    else
        dis = 0;

    tot = (qty * rate) - (qty * rate * dis / 100);
    printf("Total Prize => Rs.%f\n", tot);
    
    return 0;
}