// to calculate the real roots of the quadratic equation
#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, d, r1, r2;
    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    d = ((b * b) - 4 * a * c);
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("The roots of the equation are: %3.2f %3.2f", r1, r2);
    }
    else
    {
        printf("The roots are imaginary\n");
    }
}