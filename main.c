#include <stdio.h>
#include <stdlib.h>
#include "parse.h"
int main()
{
    char **arrayOfTokens, str[] = "Testing to see if this stil works ";
    int numberOfTokens;

    printf("Please enter the string: ");
    printf("Number of tokens: \n");
    numberOfTokens = getTokens(str, &arrayOfTokens);
    

    
    return 0;
}