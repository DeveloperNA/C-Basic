#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 16


int* splitIp(char* ip)
{
    int i, j, *arr;
    int temp =0;
    arr = (int*)malloc( 4* sizeof(int));
    
    for(i=0, j=0; i<strlen(ip); i++){
        if(ip[i] == '.'){
            arr[j] = temp;
            temp = 0;
            j++;
        }
        else{
            temp = temp*10 + (ip[i] - 48);
        }
    }

    arr[j] = temp;

    return arr;
}


int main()
{
    int i;
    char ip[MAX];
    unsigned int res = 0;
    scanf("%s", ip);

    int *arr = splitIp(ip);

    unsigned int a = arr[0] * pow(2, 24);
    unsigned int b = arr[1] * pow(2, 16);
    unsigned int c = arr[2] * pow(2, 8);
    unsigned int d = arr[3] * pow(2, 0);

    res = a + b + c + d;

    printf("Result = %u", res);

    return 0;
}


