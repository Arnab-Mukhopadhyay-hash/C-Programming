// Compute the gross salary of Mr. Harish. Input his basic salary. His DA is 40% of basic salary, and HRA is 20% of basic salary.
#include <stdio.h>

int main()
{
    float basic_pay, DA, HRA;
    printf("Enter the basic salary of Mr. Harish: ");
    scanf("%f", &basic_pay);
    DA = ((float)40 / 100) * basic_pay;
    HRA = ((float)20 / 100) * basic_pay;
    float total_pay = basic_pay + DA + HRA;

    printf("Total pay of Mr.Harish is: %0.2f", total_pay);
    return 0;
}