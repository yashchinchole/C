#include <stdio.h>

int main()
{
    // // Q1
    // int a;
    // b = a;                   // Wrong! Require int b = a & int a = b is wrong too !ORDER!
    // int v = 3 ^ 3;           // Right! It is in int, not in printf
    // char dt = '21 Dec 2021'; // Wrong! Require only 1 chracter in ''
    // // Q2
    // float d = (3.0 / 8 - 2); // It is actully double not float
    // Q3
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    printf("Divisibility test returns : %d \n", num % 97);
    // Q4
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k + 33;
    printf("The value of 3*x/y-z+k is %d", result);
    // // Q5
    // int + float = float
    return 0;
}