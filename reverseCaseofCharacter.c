#include <stdio.h>
#include <ctype.h> // to use system defined function islower & toupper

/*
getchar() is similar to scanf().

islower() is system defined function under ctype.h header file to check if the character is in lowercase or not.

toupper() converts the input parameter into equivalent uppercase char.

putchar() is similar to printf().
*/

int main()
{
  printf("\n\n\t\tC Study Session - We Gonna learn today\n\n\n");
  
  char alphabet;
  
  printf("Enter in an Alphabet: ");
  putchar('\n');
  
  alphabet = getchar();
  
  printf("\n\nReverse case of %c is : ", alphabet);
  
  if(islower(alphabet))
    putchar(toupper(alphabet));
  
  else
    // must be an uppercase character
    print("%c", tolower(alphabet))
  
  printf("\t\tCoding is the duality of man!!!\n\n");
  printf("\t\tIt is both:");
  printf("\t\tGood and Evil");
  printf("\t\tFun and Frustrating");
  
  return 0;
}
