#include <stdio.h>

/* ------------- memcpy -------------- */

void *my_memcpy(void *DestAddress,void * SrcAddress, unsigned int size);
unsigned char Name_1[20] = "Abdullah";
unsigned char Name_2[20];




int main ()
{

    printf("%s\n", Name_2);
    my_memcpy(Name_2, Name_1, 20);
    printf("%s\n", Name_2);

    return 0;
}


void *my_memcpy(void *DestAddress, void * SrcAddress, unsigned int size)
{
    unsigned char *TempDestAddress = DestAddress;
    unsigned char *TempSrcAddress = SrcAddress;
    if (NULL == DestAddress || NULL == SrcAddress)
    {
        printf("Error! memcopy has NULL pointer parameter\n");
    }
    else 
    {
        while (size--)
        {
            *TempDestAddress++ = *TempSrcAddress++;
        }
    }

    return DestAddress;
}

/*
    output : 
        
        Abdullah
*/