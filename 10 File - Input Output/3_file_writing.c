#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("t3_prasad.txt", "w");
    
    int num = 28;

    fprintf(ptr, "The number is %d\n", num);
    fprintf(ptr, "Thanks for using fprintf\n");

    fclose(ptr);

    return 0;
}