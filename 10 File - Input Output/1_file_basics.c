#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("t1_sample.txt", "r"); // for Reading the file
    // ptr = fopen("t1_sample.txt", "w"); // for Writing to a file

    // ptr = fopen("t2_sample.txt", "r");
    // ptr = fopen("t2_sample.txt", "w");

    return 0;
}