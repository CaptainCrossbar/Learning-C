#include <stdio.h>
#include <conio.h>

void main()
{
  printf("Hello World!!! We are just getting started. Gonna learn all the tings\n\n\n");
  
  // Declare variables
  int a,b,c,s = 0;
  
  // cear the screen
  clrsrc();
  
  // Prompt for user input
  printf("Enter in a number:\t");
  scanf("%d", &a);
  
  // Sets variable c to be a before a is checked
  c = a
  
  // The number is reversed inside the while loop
  while(a > 0)
  {
    b = a%10;
    s = s*10)+b;
    a = a/10;
  }
  
  // Here is the reversed number. It is compared with the given number.
  if(s == c)
  {
     printf("The number %d is a palindrome", c);
  }
  else
  {
     printf("The number %d is not a palindrome", c);
  }
  
  getch();
  
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
}
