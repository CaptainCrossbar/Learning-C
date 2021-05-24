#include <stdio.h>

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  // Creates 2 int variables, 1 float variable and 1 char variable
  int num1, num2;
  float fraction;
  char character;
  
  // Prompts user for input, takes the inputs as an integer
  printf("Please enter in 2 numbers\n");
  scanf("%d%i", &num1, &num2);
  printf("\n\nThe 2 numbers you entered are %d and %i\n\n", num1, num2);
  
  // Prompts user for input, takes the input as a float
  printf("Please enter in a decimal number\n");
  scanf("%f", &fraction);
  printf("\n\nThe decimal in the C langauge is trated as a float.\n The flaot you entered is %f\n\n", fraction);
  
  // Prompts user for input, the takes the input as a char
  printf("Please enter in a character\n");
  scanf("%c", &character);
  printf("\n\nThe character that you entered in is %c", character);
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  return 0;
}
