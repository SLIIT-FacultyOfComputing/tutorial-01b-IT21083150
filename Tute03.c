/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int i,u_limit,tot = 0 ;

  printf("Enter the upper limit : ");
  scanf("%d",&u_limit);

  for(i = 0 ; i <= u_limit ; i++)
  {
    tot += i;
  }

  printf("sum = %d",tot);
  return 0;
}

