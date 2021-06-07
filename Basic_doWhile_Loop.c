#include <stdio.h>

/*
Every loop consists of three parts in sequence:

Initialization: Use to initialize the loop variable.
Condition: It is checked after each iteration as an entry point to the loop.
Updation: Incrementing the loop variable to eventually terminate the loop not satisfying the loop condition.

Do while loop is used when the actual code must be executed atleast once. For example: Incase of menu driven functions.
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  int i = 10;
  
  do
  {
    printf("i = %d\n",i);
    i = i - 1
  }
  
  while(i > 0);
  
  printf("\nThe value of i after exiting the loop is %d\n\n",i);
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
  
