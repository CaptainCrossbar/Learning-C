#include <stdio.h>

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  // char variable
  char str[50]; // char array with size of 50
  
  // Prompts the user for input
  printf("Enter your complete name: \n\n");
  
  // Gets the char string array that the user inputs and prints out a message
  gets(str);
  printf("\n\nWelcome to the study sess %s\n\n\nHope you are ready to learn all the memes!", str);
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  return 0;
}
