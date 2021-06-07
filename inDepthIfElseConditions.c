#include <stdio.h>

/*
Decision making is about deciding the order of execution of statements based on certain conditions or repeat a group of statements until certain specified conditions are met. 
C language handles decision-making by supporting the following statements,

 - if statement
 - switch statement
 - conditional operator statement (? : operator)
 - goto statement
*/

/*
Decision making with if statement
The if statement may be implemented in different forms depending on the complexity of conditions to be tested. The different forms are,

 - Simple if statement
 - if....else statement
 - Nested if....else statement
 - Using else if statement
*/

// if statement example
void main()
{
  int x, y;
  x = 15;
  y = 13;
  
  if (x > y)
  {
    printf("x is greater than y")
  }
}

// if else statement example
void ifElse()
{
  int a, b;
  a = 69;
  b = 420;
  
  if (a > b)
  {
    printf("a is greater than b");
  }
  else
  {
    printf("b is greater than a");
  }
}

// nested if else statement example
void nested()
{
  int c,d,e;
  printf("Enter in 3 numbers : \n");
  scanf("%d%d%d", &c, &d, &e);
  
  if (c > d) 
  {
    if (c > e) 
    {
      printf("c is the greatest");
    }
    
    else 
    {
      printf("e is the greatest");
    }
  }
  
  else 
  {
    if (d > c) 
    {
      printf("d is the greatest");
    } 
    
    else 
    {
      printf("e is the greatest");
    }
  }
}

void ladder()
{
  int f;
  printf("Enter in a number : \n");
  scanf("%d", &f);
  
  if (f%5 == 0 && f%8 == 0) 
  {
    printf("The number is divisible by both 8 and 5");
  } 
  
  else if (f%8 == 0) 
  {
    printf("the number is divisible by 8");
  } 
  
  else if (f%5 == 0) 
  {
    printf("the number is divisible by 5");
  } 
  
  else 
  {
    printf("The number is not divisible by both 8 and 5");
  }
}

/*
Points to remember

1. In if statement, a single statement can be included without enclosing it into curly braces { ... }
int p = 69;
if (p > 69)
  printf("Nice Success");
No curly braces are required in the above case, but if we have more than one statement inside if condition, then we must enclose them inside curly braces.

2. == must be used for comparison in the expression of if condition, if you use = the expression will always return true, because it performs assignment not comparison.

3. Other than 0(zero), all other values are considered as true
if(420)
  print("Blaze");
In this example, blaze will be printed
*/
