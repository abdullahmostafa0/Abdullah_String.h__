#include <stdio.h>

/* ------------- memset -------------- */

void *my_memset(void *AddressDest, unsigned char value, unsigned int size_byte);
unsigned char Array[0];
int main ()
{

    unsigned char str[50] = "This is string.h library function";


   my_memset(str,'$',7);
   printf("%s\n", str);

    return 0;
}



void *my_memset(void *AddressDest, unsigned char value, unsigned int size_byte)
{
    unsigned char *TempAddressDest = AddressDest;
    if(NULL == AddressDest)
    {
        printf("Error! this functions has null pointer parameter\n");
    }
    else
    {
        while (size_byte--)
        {
            *TempAddressDest++ = value;
        }
        
    }
    return AddressDest;
}
/*
    output : 
    
    $$$$$$$ string.h library function
*/