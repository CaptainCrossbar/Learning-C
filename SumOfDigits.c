#include <stdio.h>

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  // Declared variables
  int n, sum = 0, c, remainder;
  
  // Prompt user for input
  printf("Enter the number you want to add digits of:  ");
  scanf("%d", &n);

  // Loop that adds up the number of digits
	while(n != 0)
    	{
        	remainder = n%10;
        	sum += remainder;
        	n = n/10;
    	}

  // Displays the sum
  printf("\n\nSum of the digits of the entered number is  =  %d\n\n", sum);
  
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  return 0;
}
