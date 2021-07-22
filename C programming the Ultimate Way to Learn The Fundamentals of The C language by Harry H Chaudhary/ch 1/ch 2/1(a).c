// write a program to calculate the sum of digits of a three digit number. e.g. 125 is 8
#include<stdio.h>

//int main(){
//	int num;
//	printf("Enter a three digit number: ");
//	scanf("%d", &num);
//	int first = num%10;
//	num = num/10;
//	int second = num%10;
//	num = num/10;
//	int third = num%10;
//	printf("\nThe sum of the digits is: %d", first+second+third);
//	return 0;
//}

//int main(){
//	int num;
//	printf("Enter a three digit number: ");
//	scanf("%d", &num);
//	int i = 0, sum = 0;
//	for(; i < 3; i++){
//		int digit = num % 10;
//		num = num/10;
//		sum += digit;
//	}
//	printf("The sum of digits is %d", sum);
//	return 0;
//}


// General Method
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int sum;
	while(num!= 0)
	{
		sum += num%10;
		num = num/10;
	}
	printf("The sum of the digits is: %d", sum);
	return 0;
}

