#include <stdio.h>

int main()
{
    int p, c, m; // p = physics, c = chemistry, m = maths
    float total;

    printf("Enter your marks of p, c, m \n");
    scanf("%d %d %d", &p, &c, &m);

    total = (p + c + m) / 3; // It gives right ans only when you use "FAIL" in if statement & use "<" 
    if ((total < 40) || (p < 33) || (c < 33) || (m < 33)) 
    {
        printf("Your total percent is %f and You are FAIL", total);
    }
    else
    {
        printf("Your total percent is %f and You are PASS", total);
    }

    return 0;
}