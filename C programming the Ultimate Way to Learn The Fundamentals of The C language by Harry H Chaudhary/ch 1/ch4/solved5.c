// write a program to check if the given sequence of numbers is in ascending order or not.
// The sentiinel value for the sequence is -1.
#include<stdio.h>
void main(){
	enum{false, true};	// we need enum to declare false and true otherwise true and false are not accepted
	int n, i, prev, flag = true;
	// flag is needed since we need something to convert whenever the next number is less than the previous one, otherwise 
	// in each line we need to give the output like if it's in ascending order or not
	for(i = 1; n != -1; i++){
		prev = n;
		printf("Enter number %d: ", i);
		scanf("%d", &n);
		if(n < prev && n != -1){
			flag = false;
		}
	}
	if(flag == false){
		printf("\nNot in ascending order");
	}
	else{
		printf("\nIn ascending order");
	}
}
