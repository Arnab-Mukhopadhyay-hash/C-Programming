// converting decimal no. to its binary equivalent
#include<stdio.h>
int main(){
	int n, bin_arr[10], i;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i = 0; n!= 0; i++){
		bin_arr[i] = n%2;
		n = n/2;
	}
	n = i;
	// printing the array
	for(i = 0; i < n; i++){
		printf("%d", bin_arr[i]);
	}
	return 0;
}
