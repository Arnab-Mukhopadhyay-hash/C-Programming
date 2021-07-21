//WAP to SWAP (interchange) two numbers.
#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("\nBefore swap the value of a is: %d and the value of b is: %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("\nAfter swap the value of a is: %d and the value of b is: %d", a, b);
	return 0;
}
