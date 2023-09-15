#include "parse.h"

int getTokens(char *s, char ***args)
{

    char delim = ' '; // used for a space which seperates tokens

    int delimcount = 0; // number of delimiters

    // This could probably be seperated function but not at the moment

    // Finds the length of the largeset word and the numbet of spaces

    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == delim)
        {

            delimcount = delimcount + 1;
        }
    }

    int tokenNum = delimcount + 1; // The number of elements

    *args = calloc((tokenNum + 1), sizeof(char *));
    // char * array[tokenNum+1];
    //*args = array;

    int count = 0;

    int i = 0;
    int readNum = 0;
    int begin = 0;
    int numOfchar;
    // printf("\n The Delimcount is %d ",delimcount);

    while (count <= tokenNum)
    {
        numOfchar = 0; // Number of charcthers to be printed in each token.

        while (s[readNum] != delim && s[readNum] != '\0')
        {
            readNum++; // The current charchter being read from the original string 
            numOfchar++;  //Number of charcters in each token 
        }


        if(s[readNum] == '\0')
        {
             (*args)[i] = calloc(1, sizeof(char)); //Assigns memory to a string based off of number of charcters 
               strncpy(((*args)[i]), (&s[readNum]), numOfchar); //Nees 
        }
        (*args)[i] = calloc(numOfchar + 1, sizeof(char)); //Assigns memory to a string based off of number of charcters 
        strncpy(((*args)[i]), (&s[begin]), numOfchar); //Nees 
        (*args)[i][numOfchar]='\0';

        
                                   //printf("\n %s", (*args)[i]); used for testing porpouses. 

        i++;
        begin = numOfchar + begin + 1;
        readNum += 1;
        count++;
    }
     


    return tokenNum;
}

// The Junk Drawer

/*


                                     printf("\n  String 1 =  %s",&s[begin]);

                 printf("\n  String 1 =  %s",*args[i]);


TheTokenClub[0]   ="Testing to see if this works as a two dimensional array";
   TheTokenClub[1] ="Really testing this";

    int u=0;
    int b=0;
    printf("%s",&TheTokenClub[u][b]);
    u++;
     printf("%s",&TheTokenClub[u][b]);

*/

// char* token;
// token =(char*)malloc(50*sizeof(char));

/*
    if(*token != '\0')
    {
        printf("token created");
    }
    else
    {
        printf("creation failed");
    }
*/

// Trying to read into array of strings