#include<stdio.h>
// without using a third variable
// int main(){
//     int a, b;   // declaring two variables
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b); // taking input from the user
//     printf("The sum of the numbers is: %d", a+b); // %d is used to print the integer values.
//     return 0;
// }

// OR

// using a third variable
// int main(){
//     int a, b, sum;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     sum = a+b;
//     printf("The sum of the numbers is: %d", sum);
//     return 0;
// }

// OR

// using another function called sum
int sum(int num1, int num2){
    return num1+num2;
}
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The sum of two numbers is %d", sum(a, b));
    return 0;
}