#include <stdio.h>

int main()
{
    double min, max;
    int i, n;

    scanf("%d", &n);
    double arr[n];

    for(i=0; i<n; i++){
        scanf("%lf", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
        else if(arr[i] > max)
            max = arr[i];
    }
    
    printf("\nMin : %.2lf \nMax : %.2lf", min, max);
    return 0;
}