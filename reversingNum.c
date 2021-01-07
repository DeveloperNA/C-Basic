#include <stdio.h>

int main()

{
    int num, rem, revDigits = 0;
    scanf("%d", &num);

    while(num > 0)
    {
        rem = num % 10;
        revDigits = revDigits*10 + rem;
        num = num /10;
    }
    
    printf("%d", revDigits);
    return 0;
}