#include <stdio.h>
#include <stdlib.h>
#include "parse.h"
int main()
{
  char **arrayOfTokens;
  char str[256] = "       ";
  int numberOfTokens;

  printf("Please enter the string: ");
  fgets(str, 256, stdin);

  numberOfTokens = getTokens(str, &arrayOfTokens);
  printf("Number of tokens: %d \n", numberOfTokens);

  for (int i = 0; i <= numberOfTokens; i++)
  {

    int PrintNum = i + 1;
    
    if (*arrayOfTokens[i] == '\0')
    {
      printf("Token %d: (null)", PrintNum);
      break;
    }

    

    printf("\nToken %d: %s ", PrintNum, (arrayOfTokens)[i]);
  }
  return 0;
}