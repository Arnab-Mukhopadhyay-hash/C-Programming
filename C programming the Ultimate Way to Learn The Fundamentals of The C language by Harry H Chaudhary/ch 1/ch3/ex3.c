/* problem statement:
write a program to create a calculator which can do addition, subtraction, multiplication, division, and modulus (remainder).
*/
#include<stdio.h>
void main(){
	int n1, n2, res, op, diff;
	printf("Enter number1 and number2: ");
	scanf("%d %d", &n1, &n2);
	printf("Please select an option among the following\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for modulus\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
			printf("The sum of the numbers is: %d", n1 + n2);
			break;
		case 2:
			diff = n1 - n2;
			if(diff < 0){
				diff = diff * (-1);
			}
			printf("The difference between the numbers is: %d", diff);
			break;
		case 3:
			printf("The product of the two numbers is: %d", n1*n2);
			break;
		case 4:
			if(n2 != 0){
				printf("The quotiont is: %d", n1/n2);
			}
			else{
				printf("Error: division is not possible as the divisor is 0");
			}
			break;
		case 5:
			if(n2 != 0){
				printf("The remainder is: %d", n1%n2);
			}
			else{
				printf("Error: The divisor is 0");
			}
			break;
	}
	
}
