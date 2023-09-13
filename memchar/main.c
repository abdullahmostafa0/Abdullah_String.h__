#include <stdio.h>

/* ------------- memchar -------------- */

void *my_memchar(void *SrcStr, unsigned char Chr, unsigned int size);
unsigned char Array[20] = "Abdullah mostafa";
int main()
{

    unsigned char *ptr = NULL;
    ptr = my_memchar(Array, 'm', 20);
    if (ptr == NULL)
    {
        printf("char is not exist\n");
    }
    else
    {
        printf("the char is exist : %c\n", *ptr);
    }



    return 0;
}


void *my_memchar(void *SrcStr, unsigned char Chr, unsigned int size)
{
    unsigned char *RetValue = NULL;
    unsigned char *TempSrcStr = SrcStr;
    if (NULL == TempSrcStr)
    {
        printf("error! this function has parameter NULL pointer\n");
    }
    else
    {
        while (size--)
        {
            if(*TempSrcStr == Chr)
            {
                RetValue = TempSrcStr;
                break;
            }
            else
            {
                TempSrcStr++;
            }
        }
    }

    return RetValue;
}


/*
    output : 

    the char is exist : m
*/