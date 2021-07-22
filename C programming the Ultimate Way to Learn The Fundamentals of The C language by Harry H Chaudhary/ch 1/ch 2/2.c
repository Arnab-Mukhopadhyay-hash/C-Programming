// write a program to merge three numbers. eg a = 1, b =2 , c = 8 is 128
#include<stdio.h>

// the following code is for merging 3 digits only

//int main(){
//	int dig, num, i;
//	for(i = 0; i < 3; i++){
//		printf("Enter the digit: ");
//		scanf("%d", &dig);
//		num = num*10 + dig;
//	}
//	printf("The final number is %d", num);
//	return 0;
//}

//General Method
int main(){
	int dig;
	unsigned long int num;
	while(dig >= 0){
		printf("Enter the digit: ");
		scanf("%d", &dig);
		num = num*10 + dig;
	}
	printf("The number is %lu", num);
	return 0;
}
