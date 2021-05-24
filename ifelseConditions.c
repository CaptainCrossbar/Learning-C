#include <stdio.h>

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  // int variable
  int number;
  
  // Prompts the user for input
  printf("Please enter in a number: \n");
  scnf("%d", &number);
  
  /*
    For single statements, we can skip the curly brackets
  */
  
  // Checks to seee if the inputted number is less than a value
  if(number < 100)
    printf("Number is less than 100\n\n");
  
  // Checks to see if the number inputted is equal to the value
  else if(number == 100)
    printf("Number is equal to 100\n\n");
  
  // If we get here, the inputted number is greater than the value
  else
    printf("Number is greater than 100!\n\n")
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  return 0;
}
