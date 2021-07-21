//WAP to convert temp. From Fahrenheit to centigrade. C=(F-32) * 5/9
#include<stdio.h>
int main(){
	float centigrade, fahrenheit;
	printf("Enter the temperature in fahrenheit: ");
	scanf("%f", &fahrenheit);
	centigrade = (fahrenheit-32)*5/9;
	printf("The temperature is %3.2f degree centigrade", centigrade);
	return 0;
}
