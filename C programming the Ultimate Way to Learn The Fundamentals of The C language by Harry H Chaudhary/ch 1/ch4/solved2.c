// print the fibonacci series 1, 1, 2, 3, 5, 8, 13, ........ N
#include<stdio.h>
void main(){
	int first = 0, second = 1, next, n, i;
	printf("How many terms do you want?\n");
	scanf("%d", &n);
	printf("%d ", 1);
	for (i = 0; i< n; i++){
		next = first + second;
		first=second;
		second=next;
		printf("%d ", next);
	}
	
}
