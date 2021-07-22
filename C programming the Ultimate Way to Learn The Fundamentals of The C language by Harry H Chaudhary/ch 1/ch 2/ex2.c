/* Print the range of a number.
Eg: number 78 is between 70 and 79, 102 is between 100 and 109.

*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    // to find the range we first find the lower number and then add 10 to it to find the upper number
    int lower, upper;
    lower = num / 10 * 10; // operators work from left to right
    upper = lower + 10;
    printf("Range is %d-%d", lower, upper);
    return 0;
}