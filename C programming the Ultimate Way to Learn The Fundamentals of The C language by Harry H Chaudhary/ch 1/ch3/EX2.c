/* If cp and sp of an item is input through the keyword, WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss be incurred.*/
#include<stdio.h>
void main(){
	int cp, sp, profit = 0, loss = 0;
	printf("Enter the cost price of the item: ");
	scanf("%d", &cp);
	printf("Enter the selling price of the item: ");
	scanf("%d", &sp);
	if(sp>cp){
		profit = sp - cp;
		printf("Your profit is: %d", profit);
	}
	else{
		loss = cp - sp;
		printf("Your loss is: %d", loss);
	}
}
