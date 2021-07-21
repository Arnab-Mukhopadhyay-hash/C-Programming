/* WAP to calculate the area of a circle.*/
#include <stdio.h>
int main(){
  printf("Enter the radius of the circle: ");
  int r;
  float pi = 3.14, area;
  scanf("%d", &r);
  area = pi*r*r;
  printf("The area of the circle is: %3.2f", area);
  return 0;
}
