#include <stdio.h>

/*
Below is a program to find ASCII value of any input character.
 - %c is the format specifier to take character as input
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  // Character value
  char c;
  
  // Prompts the user for input, wants a character input
  printf("Please enter in a character : ");
  scanf("%c", &c);
  printf("\n\nThe ASCII value of %c = %d",c,c);
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  return 0;
}
