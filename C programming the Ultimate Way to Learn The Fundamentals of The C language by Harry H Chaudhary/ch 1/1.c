#include<stdio.h>
int main()
{
	printf("Enter two numbers: ");
	int a, b, sum;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("The sum of the numbers is %d", sum);
	return 0;
}