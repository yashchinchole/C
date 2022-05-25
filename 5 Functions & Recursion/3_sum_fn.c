#include <stdio.h>
// Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // Function Prototype Declaration

int main()
{
    int result;
    result = sum(2, 5); // Function Call
    printf("The value of c is %d\n", result);
    return 0;
}
// Functionn Call & Function Definition --> Both have different variables

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}