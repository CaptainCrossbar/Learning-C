#include <stdio.h>

/*
Below is a program on switch case with break.

switch() can only contain char and int.

break is used to exit from switch statement.

switch case can be without default case.

Another piece of information here is that a char variable is always initialized within ''(single quotes).
*/

int main() 
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  //local variable declaration
  char grade;
  
  printf("Enter in your grade: \n");
  scanf("%c", &grade);
  
  switch(grade) 
  {
    case 'A':
      printf("Outstanding work. Bring honor to family, you have.");
      break;
    case 'B':
      printf("Great work.\nBring honor to family, you have.\nBut raise grade to become favorite child, you must");
      break;
    case 'C':
      printf("This is a passing grade.\nIts average but walking a fine line.");
      break;
    case 'D':
      printf("You passed.\nIts not failing but its not something to brag about.");
      break;
    case 'F':
      printf("Tough luck.\nBetter luck next time...\nBrought dishonor to family, you have.");
      break;
  }
  
  printf("Your grade is %c\n", grade);
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  return 0;
}
