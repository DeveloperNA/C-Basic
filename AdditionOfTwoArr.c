#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    double arr1[n], arr2[n], arr[n];
    printf("Enter 1st array:");
    for(i=0; i<n; i++){
        scanf("%lf", &arr1[i]);
    }
    printf("Enter 2nd array:");
    for(i=0; i<n; i++){
        scanf("%lf", &arr2[i]);
    }

    for(i=0; i<n; i++){
        arr[i] =arr1[i]+arr2[i];
    }
    printf("Resultant array");
    for(i=0; i<n; i++){
        printf("%.2lf ", arr[i]);
    }
    return 0;
}