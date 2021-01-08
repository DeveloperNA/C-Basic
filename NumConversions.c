#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int revDigits(int n, int zeros)
{
    int rev = 0;

    while(n >0){
       rev = rev * 10 + n % 10;
       n = n /10;
    }
    rev = rev * pow(10, zeros);
    return rev;
}

int count(int bin)
{
    int nDigits = floor(log10(abs(bin))) + 1;
    return nDigits;
}

char *revChars(char *hex, int length)
{
    int i=length-1, j=0;
    char *rev = (char*)malloc(length+1 * sizeof(char));

    while(i >= 0){
        rev[j] = hex[i];
        j++; i--;
    }

    rev[j] = '\0';
    return rev;
}

int decimalToBinary(int number)
{
  
    int bin = 0;
    int totLength =0;
    while(number > 0){
        bin = bin * 10 + number % 2;
        number = number/2; 
        totLength++;
    }
    int zeros = totLength - count(bin);

    return revDigits(bin, zeros);
}

int decimalToOctal(int number)
{
    int oct = 0;
    int totLength=0;

    while(number > 0){
        oct = oct * 10 + number % 8;
        number = number / 8;
        totLength++;
    }
    int zeros = totLength - count(oct);

    return revDigits(oct, zeros);
}

char* decimalToHexa(int number)
{
    int i=0, j;
    
    char  *hex = (char*)malloc(80*sizeof(char));
    char hexcodes[6][2] = {"A", "B", "C", "D", "E", "F"};
    
    while(number > 0){

        if(number%16 > 9)
        {
            hex[i] = hexcodes[(number%16)%10][0];
        }
        else
        {
            hex[i] = (number % 16) + 48 ; 
        }

        number = number / 16;
        i++;
    }
    hex[i] = '\0'; 
    return revChars(hex, i);
}

int main()
{
    int i, number, pos, bin, oct;
    char* hex;
    printf("Enter the number");
    scanf("%d", &number);

    // printf("Enter the position to set bit");
    // scanf("%d",&pos);

    bin = decimalToBinary(number);
    oct = decimalToOctal(number);
    hex = decimalToHexa(number);

    printf("Binary :%d\n", bin);
    printf("Octal :%d\n", oct);
    printf("Hexadecimal :%s", hex);

    return 0;
}