/* pascal's triangle
1
11
121
1331
14641
*/
#include<stdio.h>
void main(){
	int r, i, j, b;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	for(i = 0; i<r;i++){
		b = 1;
		for(j = 0; j<=i; j++){
			if(i == 0 || j == 0){
				printf("%3d", b);
			}
//			printf("%d", i);
			else{
				b = b*(i-j + 1)/j;	// learn this formula or find some other logic
				
				printf("%3d",b);
			}
		}
		printf("\n");
	}
}
