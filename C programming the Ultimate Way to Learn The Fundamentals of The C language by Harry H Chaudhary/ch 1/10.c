//WAP to calculate the remainder of 2 numbers without using % operator.
#include<stdio.h>
int main(){
	// atfirst we need two variables to store two numbers and a variable to store the remainder
	int d, p;
	float r;
	// taking input from the user.
	printf("Enter two numbers(greater one first): ");
	scanf("%d %d", &d, &p);
	// we need another integer to store the quotient
	float q = d/p;
	// now we do remember the remainder theorem from our school days: d = pq+r;
	// so r = d-pq,
	r = d-(p*q);
	printf("\nThe remainder is: %3.2f", r);
	return 0;
}
