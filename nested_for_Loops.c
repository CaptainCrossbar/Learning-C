#include <stdio.h>

/*
Nested loops are usually used to print a pattern in C. 
They are also used to print out the matrix using a 2 dimensional array and a lot of other patterns like pyramid of numbers etc.

Using a loop inside another loop is called nested loop.
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  int i,j,k;
  k = 0;
  printf("\n\nOutput of the Nested Loop is: \n\n");
  for(i = 0; i < 5; i++)
  {
    printf("\t\t\t\t");
    for(j = 0; j < 5; j++)
    {
      k = k + 1;
      printf("* ");
    }
    
    printf("\n")
  }
  
  printf("The value of k after going through the nested loop is %d", k);
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
