#include <stdio.h>

int main()
{
    int a=10, b;
    b = sizeof(++a);
    printf("%d %d", a, b);
    return 0;
}