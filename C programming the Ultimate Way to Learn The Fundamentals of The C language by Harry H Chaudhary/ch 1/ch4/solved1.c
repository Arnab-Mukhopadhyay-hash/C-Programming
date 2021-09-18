// print the numbers in reverse order from N to 1
#include<stdio.h>
void main(){
	int n, i;
	printf("Enter the maximum number: ");
	scanf("%d", &n);
	for(i = n; i > 0; i--){
		printf("%d, ", i);
	}
	printf("\b");	// its a backspace for removing the last comma
}
