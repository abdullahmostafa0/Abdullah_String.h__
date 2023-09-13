#include <stdio.h>

/* ------------- memmove -------------- */

void *my_memmove(void *DestAddress,void * SrcAddress, unsigned int size);
unsigned char Name_1[20] = "Abdullah";
unsigned char Name_2[20] = "Abdullah Mostafa";




int main ()
{

    printf("%s\n", Name_2);
    my_memmove(Name_2, Name_1, 20);
    printf("%s\n", Name_2);

    return 0;
}


void *my_memmove(void *DestAddress, void * SrcAddress, unsigned int size)
{
    unsigned char *TempDestAddress = DestAddress;
    unsigned char *TempSrcAddress = SrcAddress;
    unsigned char TempArray[size];
    if (NULL == DestAddress || NULL == SrcAddress)
    {
        printf("Error! memcopy has NULL pointer parameter\n");
    }
    else 
    {   
        unsigned char counter = 0;
        for(counter = 0; counter <= size; counter++)
        {
            TempArray[counter] = *TempSrcAddress++;
        }
        for(counter = 0; counter <= size; counter++)
        {
            *TempDestAddress++ = TempArray[counter];
        }
        
    }

    return DestAddress;
}

/*
    output : 
        
        Abdullah Mostafa
        Abdullah
*/