#include <stdio.h>

int main()
{
    int n, i;
    double avg, sum=0;

    scanf("%d", &n);

    double arr[n];
    for(i =0; i<n; i++){
        scanf("%lf", &arr[i]);
    }

    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    avg = (double)sum /n;

    printf("Sum: %.2lf \nAverage: %.2lf", sum, avg);
    return 0;
}