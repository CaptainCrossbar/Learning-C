#include <stdio.h>

/*
Every loop consists of three parts in sequence

Initialization: Use to initialize the loop variable.
Condition: It is checked after each iteration as an entry point to the loop.
Updation: Incrementing the loop variable to eventually terminate the loop not satisfying the loop condition.

Below is a simple program on while loop.
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  int i = 0; // declaration and initialization at the same time
  
  // while i is less than 10
  while(i<10)
  {
    printf("%d\n", i);
   
    //Update i so the condition can be met to eventually terminate the loop
    i++; //same as i = i + 1
  }
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
