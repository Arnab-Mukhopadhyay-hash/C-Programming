// write a program to accept scores of a person and calculate sum of them and their average and print them.
// pg - 85
#include<stdio.h>
void main(){
	int count = 0;
	float marks=0, sum = 0, avg;
	while(marks>=0){
		printf("Enter scores(-1 to stop): ");
		scanf("%f", &marks);
		if(marks>0){
			sum += marks;
			count++;
		}
	}
	avg = sum/count;
	printf("The average is %f", avg);
}
