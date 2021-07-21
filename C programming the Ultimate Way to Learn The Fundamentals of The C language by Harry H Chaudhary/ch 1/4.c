// WAP to print the total seconds in a given time (hrs, min, sec’s).
#include <stdio.h>
int main(){
  int hrs, mins, secs, sec = 60, min = 60, time=0;
  printf("Enter the time in the format 'hrs,mins,secs': ");
  scanf("%d,%d,%d", &hrs, &mins, &secs);
  time+=secs;
  mins=mins*sec;
  time+=mins;
  hrs=hrs*min*sec;
  time+=hrs;
  printf("The total seconds is: %d", time);

  return 0;
}
