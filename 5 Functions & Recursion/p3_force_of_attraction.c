#include <stdio.h>
float force(float mass);

int main()
{
    float m;
    printf("Enter the mass of body in kgs\n");
    scanf("%f", &m);

    printf("The value of force in Newton is %.2f", force(m));
    return 0;
}

float force(float mass)
{
    return mass * 9.8;
}