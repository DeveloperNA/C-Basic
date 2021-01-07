#include <stdio.h>

int main()
{
    const double PI = 3.14;
    double radius = 5;
    double area = PI * radius * radius;
    double perimeter = 2 * PI * radius;

    printf("Area = %.2lf \nRadius = %.2lf \nPerimeter = %.2lf", area, radius, perimeter);

    return 0;
}