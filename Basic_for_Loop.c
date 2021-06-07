#include <stdio.h>

/*
Every loop consists of three parts in a sequence

Initialization: Use to initialize the loop variable.
Condition: It is checked after each iteration as an entry point to the loop.
Updation: Incrementing the loop variable to eventually terminate the loop not satisfying the loop condition.

Remember that the loop condition checks the conditional statement before it loops again.

Syntax:

for(initialization, condition, incrementation)
{ 
    code statements;
}

Below is a simple program on for loop.
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  /*
  Always remember to declare the variable before using them. 
  Otherwise it will throw an error
  */
  
  int i = 0; // Declaration and Initialization at the same time
  
  for(i = 0; i < 10; i++)
  {
    printf("i = %d\n", i);
    
    /*
    consequently, when i equals 10, the loop breaks.
    i is updated before the condition is checked.
    hence the value of i after exiting the loop is 10.
    */
  }
  
  printf("\n\The value of i after exiting the loop is %d\n\n", i);
  printf("\nRemember that the loop condition checks the conditional statement before it loops again.\n\n");
  printf("Consequently, when i equals 10, the loop breaks.\n\n");
  printf("i is updated before the condition is checked- hence the value of i after exiting the loop is 10 .\n\n");
  
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
