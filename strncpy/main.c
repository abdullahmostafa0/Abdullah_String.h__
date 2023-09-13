#include <stdio.h>

/* ------------- strncpy -------------- */

unsigned char *my_strncpy(unsigned char *dest,unsigned char *src, unsigned char size);


int main()
{
    unsigned char name1[30] = {"abdullah"};
    unsigned char name2[30];
    my_strncpy(name2, name1, 8);
    printf("%s\n", name2);
    my_strncpy(name2, name1, 12);
    printf("%s\n", name2);




    return 0;
}

unsigned char *my_strncpy(unsigned char *dest,unsigned char *src, unsigned char size)
{
    unsigned char *TempDest = dest;
    unsigned char *TempSrc = src;
    if (NULL == TempDest || NULL == TempSrc)
    {
        printf("Error! the function has null parameter\n");
    }
    else
    {
        while(size--)
        {
            if (*TempSrc == 0)
            {
                *TempDest = 0;
            }
            else
            {
                *TempDest++ = *TempSrc++;
            }
        }
        *TempDest = 0;
    }

    return dest;
}

/*
    output :

        abdullah
        abdullah
*/