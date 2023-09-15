#include <stdio.h>
#include <stdlib.h>
#include "parse.h"
int main()
{
  char **arrayOfTokens;
  char str[256] = "       "; // I think that you said that the string wouldn't be more thant 256 charchters long
  int numberOfTokens;

  printf("Please enter the string: ");
  fgets(str, 256, stdin); // Using fgets to allow the user to enter the string

  numberOfTokens = getTokens(str, &arrayOfTokens); // Calls the functions to get the tokens

  printf("Number of tokens: %d \n", numberOfTokens);
  

  for (int i = 0; i <= numberOfTokens; i++) // Loop to print the tokens
  {
    int PrintNum = i + 1;

    if (*arrayOfTokens[i] == '\0') // This is so it can print the final null terminator the same the text shows it
    {
      printf("Token %d: (null)", PrintNum);
      break; // breaks the loop so it doens't double print
    }

    printf("\nToken %d: %s ", PrintNum, (arrayOfTokens)[i]); // prints each tokens
  }
  return 0;
}