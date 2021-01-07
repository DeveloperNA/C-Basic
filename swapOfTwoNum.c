#include <stdio.h>

int main()
{
    int a = 4;
    int b = 1;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\n%d \t %d", a, b);

    return 0;
}