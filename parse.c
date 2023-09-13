#include "parse.h"

int getTokens(char *s, char ***args)
{
    int tokenNum =0;
    
    char delim = ' ';

  
    //check if array is in bound 
    

   

     int delimcount=0;


    int maxLength=0;
    int currentNum= 0;

     //This could probably be split off into a seperate functio but leaving this for now
    for(int i=0;s[i]!='\0';i++)
    {
        currentNum++;
        
       if(s[i]==delim)
       {
            
            delimcount=delimcount+1;
             printf("\n %d",delimcount); //counting the number of delimiters which are spaces 
             if(currentNum> maxLength)
             {
                maxLength = currentNum;
             }

       }
       
    }


    int numOfElm =delimcount +1 ;

    char** TheTokenClub =(char**)malloc(numOfElm*sizeof(char));
     for(int i=0; i<numOfElm;i++)
     {
        TheTokenClub[i]=(char*)malloc(maxLength * sizeof(char));
        printf("%d",i);
     }


             
    


//Trying to read into array of strings 
/*
    
    int count=0;
    int i=0;
    int j=0;
    while(delimcount>0)
    {
        if(s[count] != delim)
        {  
            printf("%d",delimcount);
            TheTokenClub[i][j]=s[delimcount];
            j++;
        }
        else
        {
            j=0; 
            i++;
            delimcount=delimcount-1;
        }
    }

*/
    //Read until the delimeter 
    

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
