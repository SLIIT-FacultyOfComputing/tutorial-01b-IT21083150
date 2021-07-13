/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{ 
  int mark1,mark2; // variable declaration
  float avg;

  printf("Enter the subjec 1 markes : "); // gettiong mark 1 from user
  scanf("%d",&mark1);

   printf("Enter the subjec 2 markes : ");// gettiong mark 2 from user
  scanf("%d",&mark1);
  scanf("%d",&mark2);
  
  avg = (float) (mark1+mark2)/2; // calculate averge

  printf("average markes : %.2f",avg); // print the average
  return 0;
}

