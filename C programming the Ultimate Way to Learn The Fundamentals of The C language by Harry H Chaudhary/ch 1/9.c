//WAP to SWAP three numbers without using fourth variable.
#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("\nThe numbers are a: %d, b: %d, c: %d", a, b, c);
	a = a+b+c;
	b = a-(b+c);
	c = a-(b+c);
	a = a-(b+c);
	printf("\nAfter swap a = %d, b = %d, c = %d", a, b, c);
	return 0;
}
