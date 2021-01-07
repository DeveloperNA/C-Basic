#include <stdio.h>
#define PI 3.14
int main()
{
    double radius = 5;
    double area = PI * radius * radius;
    double perimeter = 2 * PI * radius;

    printf("Radius = %.2lf \nArea = %.2lf \nPerimeter = %.2lf\n",radius, area, perimeter);

    return 0;

}