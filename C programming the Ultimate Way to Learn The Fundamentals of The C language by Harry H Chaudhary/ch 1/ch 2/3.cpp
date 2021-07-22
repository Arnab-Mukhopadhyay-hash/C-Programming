//write a program to print the reverse of a 3 digit number
#include<stdio.h>

int main(){
	int num, rev;
	printf("Enter the number: ");
	scanf("%d", &num);
	while(num!= 0){
		int last_dig = num%10;
		rev = rev*10 + last_dig;
		num = num/10;
	}
	printf("The reversed number is %d", rev);
	return 0;
}
