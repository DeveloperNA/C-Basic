#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Maximum Number of bits allowed in a byte %d\n",CHAR_BIT);

    printf("Maximum Number of characters allowed %d\n", CHAR_MAX);
    printf("Maximum Number of integer values allowed %ld\n", INT_MAX);
    printf("Maximum Number of long integer values allowed %ld\n", LONG_MAX);
    printf("\n");
    printf("Minimum Number of characters allowed %ld\n", CHAR_MIN);
    printf("Minimum Number of integer values allowed%ld\n", INT_MIN);
    printf("Minimum Number of long integer values allowed %ld\n", LONG_MIN);


    return 0;
}