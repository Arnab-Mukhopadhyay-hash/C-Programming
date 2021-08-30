// write a program to print the maximum out of three numbers.
#include<stdio.h>
void main(){
	int n1, n2, n3;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if(n1>n2){
		if(n1>n3){
			printf("%d", n1);
		}
		else{
			printf("%d", n2);
		}
	}
	else{
		if(n2>n3){
			printf("%d", n2);
		}
		else{
			printf("%d", n3);
		}
	}
}
