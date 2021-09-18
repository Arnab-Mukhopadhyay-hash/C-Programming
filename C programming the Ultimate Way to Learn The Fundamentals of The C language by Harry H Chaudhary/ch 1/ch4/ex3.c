// write a program to print a multiplication chart (from 1*1 to 9*9).
#include<stdio.h>
void main(){
	int i, j;
	for(i = 1; i < 10; i++){
		for(j = 1; j < 11; j++){
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}
