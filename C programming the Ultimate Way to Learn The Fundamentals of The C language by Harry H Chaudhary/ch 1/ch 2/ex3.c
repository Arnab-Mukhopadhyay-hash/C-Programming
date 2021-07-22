/* Print the various denominations of a given rupee. Eg- if a person has 1779
in his pocket the program should print the following
500 x 3 = 1500, 100 x 2 = 200, 50 x 1 = 50, 20 x 1 = 20, 10 x 0 = 0, 5 x 1 = 5, 2x2=4, 1x0 = 0
*/
#include <stdio.h>

int main()
{
    int rupees;
    printf("Enter the amount: ");
    scanf("%d", &rupees);
    int a = rupees / 500;
    rupees = rupees % 500;
    int b = rupees / 100;
    rupees = rupees % 100;
    int c = rupees / 50;
    rupees = rupees % 50;
    int d = rupees / 20;
    rupees = rupees % 20;
    int e = rupees / 10;
    rupees = rupees % 10;
    int f = rupees / 5;
    rupees = rupees % 5;
    int g = rupees/2;
    rupees = rupees%2;
    int h = rupees / 1;
    rupees = rupees%1;
    printf("500 x %d = %d\n", a, 500*a);
    printf("100 x %d = %d\n", b, 100*b);
    printf("50 x %d = %d\n", c, 50*c);
    printf("20 x %d = %d\n", d, 20*d);
    printf("10 x %d = %d\n", e, 10*e);
    printf("5 x %d = %d\n", f, 5*f);
    printf("2 x %d = %d\n", g, 2*g);
    printf("1 x %d = %d\n", h, 1*h);
    return 0;
}
