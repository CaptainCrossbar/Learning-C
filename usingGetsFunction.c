#include <stdio.h>

/*
Below is a program that demostrates the gets function
 - gets() takes only a single line at a time i.e all the words before hitting \n(enter key).
 
Some of the important points about scanf() and gets() are:
 - scanf() and gets() both are used to take input from the user.
 - scanf() can only take input until it encounters a space. The words after space are ignored by it.
 - gets() is used to take a single input at a time but can be used to input a complete sentence with spaces unlike scanf().
*/

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
