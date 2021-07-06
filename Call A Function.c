#include <stdio.h>

int total = 0;  /* Global variable declaration */
int sum (int, int);  /* Function declaration */

int main() /* Main Function */
{
  printf("This is a basic C program that calls another to do a task\n");
  total = sum (1,1);
  printf("The Sum of two numbers is %d \n", total);
  return 0;
}

int sum(int a, int b)  /* User defined function */
{
  return a + b;
}
