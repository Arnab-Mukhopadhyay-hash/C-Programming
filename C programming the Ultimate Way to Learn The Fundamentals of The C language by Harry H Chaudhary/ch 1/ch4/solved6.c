/* write a program to print the sum of 9 + 99 + 999 + ...... n terms */
#include<stdio.h>
int main(){
	int n, sum = 0, prev_num = 0, next_num = 9;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	while(n!= 0){
		sum += next_num;
		prev_num = next_num;
		next_num = prev_num*10 + 9;
		n--;
	}
	printf("%d", sum);
	
	return 0;
}
