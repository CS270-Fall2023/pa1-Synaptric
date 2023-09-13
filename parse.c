#include "parse.h"

int getTokens(char *s, char ***args)
{
    int tokenNum =0; // Will be returned at the end of the programn 
    
    char delim = ' '; //used for a space which seperates tokens 

  
    //check if array is in bound 
    
     int delimcount=0; // number of delimiters 


    int maxLength=0; //The length of the longest words used to make the pointer array 

     //This could probably be seperated function but not at the moment 

     //Finds the length of the largeset word and the numbet of spaces 


    for(int i=0;s[i]!='\0';i++)
    {   
        
       if(s[i]==delim)
       {
            
            delimcount=delimcount+1;
             printf("\n %d",delimcount); //counting the number of delimiters which are spaces 
       }

       
    }

    int numOfElm =delimcount +1 ;  //The number of elements 

    *args =malloc(numOfElm*sizeof(char *));
    
     


        int j=0;
        int count=0;
     
         int  i=0;
        int readNum =0;
        printf("\n The Delimcount is %d ",delimcount);
        tokenNum=delimcount+1;


            while(count<tokenNum)
            { 
                maxLength=0;       

                while(s[readNum] != delim)

                {   
                    maxLength++;

                }
                 
                  (*args)[i]=malloc(maxLength * sizeof(char));


                j++;
                i++;
                readNum++;
                printf(" \nThe count is %d",count);
                count++;
            }
        return tokenNum;
}









//The Junk Drawer




/*
TheTokenClub[0]   ="Testing to see if this works as a two dimensional array";       
   TheTokenClub[1] ="Really testing this";

    int u=0;
    int b=0;
    printf("%s",&TheTokenClub[u][b]);
    u++;
     printf("%s",&TheTokenClub[u][b]);

*/

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




//Trying to read into array of strings 