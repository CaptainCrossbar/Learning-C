#include <stdio.h>

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  char ch;
  
  printf("Please input a character: \n");
  scanf("%c", ch);
  
  switch(ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("\n\nCharacter %c is a vowel\n\n", ch);
      break;
    default:
      printf("\n\nCharacter %c is not a vowel\n\n", ch);
  }
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
