#include <stdio.h>

int main()
{
    char **arrayOfTokens, str[] = "ls -l file";
    int numberOfTokens;
    numberOfTokens = getTokens(str, &arrayOfTokens);
    printf("Please enter the string: ");
    printf("Number of tokens: ");
    return 0;
}