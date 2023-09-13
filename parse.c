#include "parse.h"

int getTokens(char *s, char ***args)
{
    int tokenNum =0;
    
    char delim = ' ';

  
    //check if array is in bound 
    

   

     int delimcount=0;



     //This could probably be split off into a seperate functio but leaving this for now
    for(int i=0;s[i]!='\0';i++)
    {

       if(s[i]==delim)
       {
            delimcount=delimcount+1;
             printf("\n %d",delimcount); //counting the number of delimiters which are spaces 

       }
       
    }


    double ***TheTokenClub; 
        for(int j=0;j<delimcount;j++)
        {
            TheTokenClub=malloc(70  * sizeof(char *));
            printf("Array created\n");
        }

     

    return tokenNum;
}





  //char* token;
    //token =(char*)malloc(50*sizeof(char));



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
