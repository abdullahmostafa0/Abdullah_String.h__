#include <stdio.h>

/* ------------- strtok -------------- */

unsigned char *my_strtok( unsigned char *str, const unsigned char *delim);

int main()
{
    unsigned char str[80] = "This is - Abdullah mostafa - linked in";
    unsigned char s[2] = "-";
    unsigned char *token = NULL;
    
    /* get the first token */

    token = my_strtok(str, s);
    
    /* walk through other tokens */

    while( token != NULL ) {
        printf( " %s\n", token );
        
        token = my_strtok(NULL, s);
    }

    return 0;
}


unsigned char *my_strtok( unsigned char *str, const unsigned char *delim)
{
    unsigned char *TempStr = str;
    static unsigned char *TempStr2;
    
   
    if (NULL == str)
    {
        
        unsigned char *TempStrAgain = TempStr2;
        unsigned char *TempStrAgain2 = TempStr2;
        if (TempStr2 == NULL)
        {
            TempStr = NULL;
        }
        while(*TempStrAgain != 0)
        {
            if (*TempStrAgain == *delim)
            {
                TempStr2 = TempStrAgain;
                TempStr2++;

                *TempStrAgain = 0;
                TempStrAgain = TempStrAgain2;
                TempStr = TempStrAgain;
                break;
            }
            else
            {
                TempStrAgain++;
                if (*TempStrAgain == 0)
                {
                    TempStr = TempStr2;
                    TempStr2 = NULL; 
                }
                
            }
            
        }
        
    }
    else
    {
        
        while(*TempStr != 0)
        {
            if (*TempStr == *delim)
            {
                
                TempStr2 = TempStr;
                TempStr2++;
                
                *TempStr = 0;
                TempStr = str;
                
                
                break;
            }
            else
            {
                TempStr++;
            }   
        }
    }
    return TempStr;

}

/*
    output : 
     This is 
      Abdullah mostafa 
      linked in 

*/