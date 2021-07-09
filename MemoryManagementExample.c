#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char name[100];
  char *description;
  
  strcpy(name, "Rick Sanchez");
  
  /* allocate memory dynamically */
  description = malloc(30 * sizeof(char));
  
  if (description == NULL)
  {
    fprintf(stderr, "Error - unable to allocate memory required\n");
  }
  else
  {
    strcpy(description, "Rick Sanchez is a sciencist.");
  }
  
  /* maybe you want a bigger description */
  description = realloc(description, 100 * sizeof(char));
  
  if (description == NULL)
  {
    fprintf(stderr, "Error - unable to allocate memory required\n");
  }
  else
  {
    strcpy(description, "Rick Sanchez is in a class of his own.");
  }
  
  /* print out the results */
  
  printf("Name = %s\n", name);
  printf("Description: %s\n", description);
  
  /* release memory using free() function */
  free(description);
  
}
