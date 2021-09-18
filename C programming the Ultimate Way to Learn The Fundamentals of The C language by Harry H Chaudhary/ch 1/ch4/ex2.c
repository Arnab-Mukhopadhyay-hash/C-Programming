// write a program that gets temperatures of week days and calculate average temperature for that week
#include<stdio.h>
void main(){
	int count = 0;
	float temp, tot, avg;
	while(count < 7){
		printf("Enter the temp: ");
		scanf("%f", &temp);
		tot += temp;
		count++;
	}
	avg = tot/count;
	printf("The average temperature is: %f", avg);
}
