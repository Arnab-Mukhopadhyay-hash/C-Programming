// write a program to print the maximum out of two numbers
#include<stdio.h>
void main(){
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	if(n1>n2){
		printf("%d", n1);
	}
	else{
		printf("%d", n2);
	}
}
