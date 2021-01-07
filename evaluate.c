#include <stdio.h>

int main()
{
    int d, e;
    int a = 10, b = 20, c = 30;
    e =  ++a, ++b, ++c, a+5;
    d = (++a, ++b, ++c, a+5);
    printf("%d %d", d, e);
    return 0;
}