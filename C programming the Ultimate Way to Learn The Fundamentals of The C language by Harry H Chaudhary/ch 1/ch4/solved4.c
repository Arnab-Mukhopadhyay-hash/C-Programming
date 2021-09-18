// write a program to print the following
/*
1
12
123
1234
12345
upto n rows
*/
#include<stdio.h>
void main(){
	int n, i, j;
	printf("How many rows do you want?\n");
	scanf("%d", &n);
	for(i = 1; i<=n; i++){
		for(j = 1; j <= i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
}
