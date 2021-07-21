/* WAP to input two numbers from the keyboard and print their average. */
#include<stdio.h>
int main()
{
	printf("Enter two numbers: ");
	float a, b, avg;
	scanf("%f %f", &a, &b);
	avg=(a+b)/2;
	printf("The average of the numbers is: %3.2f", avg);
	return 0;
}
