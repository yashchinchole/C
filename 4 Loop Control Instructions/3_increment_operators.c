#include <stdio.h>

int main()
{
    int i = 5;

    printf("The value after i++ is %d\n", i++);
    printf("The value after ++i is %d\n", ++i);
    printf("The value of i is %d\n", i);
    i++;
    ++i;
    // i++ => pehle PRINT kare fir INCREMENT kare!!
    // ++i => pehle INCREMENT kare fir PRINT kare!!
    // i+=10 => INCREMENT "i" by 10!!
    printf("The value after i+=10 is %d\n", i += 10);
    --i;
    printf("Final value of i is %d\n",i);

    return 0;
}