#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, pi = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("Diameter of the circle is: %f\n", 2*radius);
    printf("Circumference of the circle is: %f\n", 2*radius*pi);
    printf("Area of the circle is: %f\n", radius*radius*pi);

    return 0;
}
