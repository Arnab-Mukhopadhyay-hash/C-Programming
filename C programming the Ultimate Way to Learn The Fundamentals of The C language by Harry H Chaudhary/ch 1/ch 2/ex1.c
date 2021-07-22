// if a four digit number is input through the keyboard,
// write a program to
// obtain the sum of the first and last digit of the number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int last_dig, first_dig;
    last_dig = num % 10;
    first_dig = num / 1000;
    int sum = last_dig + first_dig;
    printf("The sum of first and last digit is: %d", sum);
    return 0;
}