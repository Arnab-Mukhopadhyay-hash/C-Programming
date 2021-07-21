//WAP to SWAP (interchange) 2 numbers without using third variable.
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("\n Before swap a: %d and b: %d", a, b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\n After swap a: %d and b: %d", a, b);
	return 0;
}
