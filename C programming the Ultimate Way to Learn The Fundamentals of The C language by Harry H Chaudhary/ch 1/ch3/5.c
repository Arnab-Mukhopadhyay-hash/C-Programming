// write a program to print the maximum out of four numbers(short logic)
#include <stdio.h>
void main()
{
    int a, b, c, d, largest;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    largest = a;
    if (largest < b)
    {
        largest = b;
    }
    else if (largest < c)
    {
        largest = c;
    }
    else if (largest < d)
    {
        largest = d;
    }
    printf("%d", largest);
}