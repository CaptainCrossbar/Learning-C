#include <stdio.h>
#include <conio.h>

/*
Program to print the Fibonacci series using while loop.
*/

void fibonacci(int num);

void main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  int num = 0;
  clrscr();
  printf("Enter number of terms\t");
  scanf("%d", &num);
  fibonacci(num);
  getch();
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
}

void fibonacci(int num)
{
  int a, b, c, i = 3;
  a = 0;
  b = 1;
  if(num == 1)
  printf("%d",a);

  if(num >= 2)
  printf("%d\t%d",a,b);

  while(i <= num)
  {
    c = a+b;
    printf("\t%d", c);
    a = b;
    b = c;
    i++;
  }
}
