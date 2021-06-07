#include <stdio.h>

/*
Some important points about Global variable declaration are:

It can be done anywhere within the program.
Unlike local variables that can be used within the scope of a particular function.
& is used to assign the input value to the variable and store it at that particular location.

%0nd is used to represent numbers in n digit format with leading 0's.

Below is a program to find largest and smallest value using global declaration.
*/

int a, b;
int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  printf("Please Enter in Two Values to find the Greatest and Smallest Number: \n");
  scanf("%d%d", &a, &b);
  
  if(a == b)
    printf("Both are equal\n");
  
  else if(a < b)
  {
    printf("\n\nThe Largest number is %03d\n", b);
    printf("\n\nThe Smallest number is %03d\n", a);
  }
  
  else
  {
    printf("\n\nThe Largest number is %03d\n", a);
    printf("\n\nThe Smallest number is %03d\n", b);
  }
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
