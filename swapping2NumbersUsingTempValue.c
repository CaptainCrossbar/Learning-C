#include <stdio.h>
#include <conio.h>

/*
Below is a program to swap two numbers using temporary variable.
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  // Variables
  int x = 501, y = 782, temp;
  
  // Shows the valules before the swap
  printf("Before Swapping:\n");
  printf("x = %d and y = %d", x, y);
  
  // Conducts the swap
  temp = x;
  x = y;
  y = temp;
  
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
