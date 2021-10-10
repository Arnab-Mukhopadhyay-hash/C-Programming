#include <stdio.h>
#include <math.h>

int Edistance(int x1, int y1, int x2, int y2)
{
    int r = sqrt((pow(y2 - y1, 2)) + (pow(x2 - x1, 2)));
    return r;
}

float AreaOfCircle(int x1, int y1, int x2, int y2, int (*p)(int, int, int, int))
{
    float rad = p(x1, y1, x2, y2);
    return 3.14 * (pow(rad, 2));
}

void main()
{
    int x1, x2, y1, y2;
    int (*distPtr)(int, int, int, int);

    printf("Enter the coordinates: \n");
    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);

    distPtr = &Edistance;
    float result = AreaOfCircle(x1, y1, x2, y2, distPtr);
    printf("The area of the circle is: %.2f meter^2", result);
}
