#include <stdio.h>

/* ------------- strxfrm -------------- */

unsigned int my_strxfrm(unsigned char *dest, unsigned char *src, unsigned n);


int main()
{

    unsigned char name1[40] = "abdullah mostafa";
    unsigned char name2[40];
    unsigned int Length = 0;
    Length = my_strxfrm(name2, name1, 8);
    if (*name2 == 0)
    {
        printf("Please Enter length for copy!\n");
    }
    else
    {
        printf("Destination is : %s || Length is : %i\n", name2, Length);
    }




    return 0;
}


unsigned int my_strxfrm(unsigned char *dest, unsigned char *src, unsigned int n)
{
    unsigned char *TempDest = dest;
    unsigned char *TempSrc = src;
    unsigned int Length = 0;
    if(NULL == TempDest || NULL == TempSrc)
    {
        printf("This Function has NULL pointer parameter\n");
    }
    else
    {
        if (0 == n)
        {
            *dest = 0; // will be zero if parameter n = 0
        }
        else 
        {
            while(n--)
            {

                if (*TempSrc == 0)
                {
                    break;
                }
                *TempDest++ = *TempSrc++;
                 Length++;
                
            }
            *TempDest = 0;
        }
    }
    return Length;
}

/*
    output : 
    Destination is : abdullah || Length is : 8
    
*/