#include "parse.h"

int getTokens(char *s, char ***args)
{

    char delim = ' '; // used for a space which seperates tokens

    int delimcount = 0; // number of delimiters

    // This could probably be seperated function but not at the moment

    // Finds the length of the largeset word and the numbet of spaces

    for (int i = 0; s[i] != '\0'; i++) // This is used to find the number of tokens
    {

        if (s[i] == delim) // counts each space
        {

            delimcount = delimcount + 1;
            while (s[i + 1] == delim) // If there is more than one space in a row it won't count multiple spaces as tokens
            {
                i++;
            }
        }
    }

    int tokenNum = delimcount + 1; // The number of elements

    *args = calloc((tokenNum + 1), sizeof(char *)); // Allocates enough space for each token and a null terminator at the end of set

    int count = 0; // Counters for the loop
    int i = 0;
    int readNum = 0;
    int begin = 0;
    int numOfchar;

    while (count <= tokenNum) // Large while loop that is used  for the primary program
    {
        numOfchar = 0; // Number of charcthers to be printed in each token.

        while ((s[readNum]) == delim) // If the next word starts with a space
        {
            readNum++; // Move number until it is no longer reading a space

            begin++; // Moves the start of the next string to e printed.
        }

        while (s[readNum] != delim && s[readNum] != '\0')
        {
            readNum++;   // The current charchter being read from the original string
            numOfchar++; // Number of charcters in each token
        }

        if (s[readNum] == '\0') //
        {
            (*args)[i] = calloc(1, sizeof(char));            // Assigns memory to a string based off of number of charcters
            strncpy(((*args)[i]), (&s[readNum]), numOfchar); // Nees
        }
        
        (*args)[i] = calloc(numOfchar + 1, sizeof(char)); // Assigns memory to a string based off of number of charcters
        strncpy(((*args)[i]), (&s[begin]), numOfchar);    // Nees
        (*args)[i][numOfchar] = '\0';

        // printf("\n %s", (*args)[i]); used for testing porpouses.

        i++;
        begin = numOfchar + begin; // Moves begin to the next level of priting
        count++;
    }

    return tokenNum;
}
