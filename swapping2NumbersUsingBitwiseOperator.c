#include <stdio.h>

/*
Below is a program to swap two numbers using bitwise operator.
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  // Variables
  int x = 6, y = 9;
  
  // Shows the valules before the swap
  printf("Before Swapping:\n");
  printf("x = %d and y = %d", x, y);
  
  // Conducts the swap
  x = x^y;
  y = x^y;
  x = x^y;
  
  // Shows the value after the swap
  printf("\n\n\nAfter Swapping:\n");
  printf("x = %d and y = %d", x, y);
  getch();
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
