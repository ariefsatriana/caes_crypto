#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    //assign second word on command line to key variable
    string key = (argv[1]);
  
    // if key equals 0 or there is no integer at the second location re-prompt
    if( key == 0 || argc > 2 )
    {  
         printf("I need 1 positive interger to encrypt\n");
        return 1;
    }
    
    // else run program
    else
    {
        //converts key to an integer where previously was stored as a string
        int k = atoi(key);
        
        // assigns new string received as p
        string p = GetString();
        
        //loops through string
        for(int i = 0, n = strlen(p); i < n; i++)
        {
            if(isalpha(p[i])) 
            {           
                //if an alphabet charater and it's uppercase do the following
                if(isupper(p[i]))   
                {
                //sets alpha start point to 0, shifts letter by key and converts back up to ascii numbering
                int aph_index = ((p[i]) - 65 );
                int c = (aph_index + k) % 26;
                int ascii = (c + 65);
                printf("%c", ascii);
                }
                
                //else if alpha but lowercase do the following
                else
                {
                //sets alpha start point to 0, shifts letter by key and converts back up to ascii numbering
                int aph_index = ((p[i]) - 97 );
                int c = (aph_index + k) % 26;
                int ascii = (c + 97);
                printf("%c", ascii); 
                }
            }            
            //else character is not an alphabet character in which case, do nothing and print character as is  
            else
            {
            printf("%c", p[i]);
            }          
        }
        //print new line
        printf("\n");
    } 
    return 0;
}
