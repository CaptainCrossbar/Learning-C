#include <stdio.h>
#include <conio.h>

/*
Basic program to factorial of a number using a for loop
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  int fact, i, n;
  fact = 1;
  printf("Enter in a number\t");
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
    fact = fact*i;
  }
  
  printf("Factorial of %d is %d", n, fact);
  
  getch();
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
