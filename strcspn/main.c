#include <stdio.h>

/* ------------- strcspn -------------- */

unsigned int my_strcspn(unsigned char *str1,unsigned char *str2);

int main()
{
    unsigned char name1[] = {"ABCDEF49609100"};
    unsigned char name2[] = {"013"};
    unsigned int Length = 0;
    Length = my_strcspn(name1, name2);
    printf("%i\n", Length);

    return 0;
}



unsigned int my_strcspn(unsigned char *str1,unsigned char *str2)
{
    unsigned char *TempStr1 = str1;
    unsigned char *TempStr2 = str2;
    unsigned int length = 0;
    unsigned int Counter = 0;
    if (NULL == TempStr1 || NULL == TempStr2)
    {
        printf("Error! function has null parameter\n");
    }
    else
    {
        
        for (TempStr2 = str2; *TempStr2 != 0; TempStr2++)
        {
            for (TempStr1 = str1; *TempStr1 != 0; TempStr1++)
            {
                if (*TempStr1 == *TempStr2)
                {
                    Counter++;
                    
                }
            }
        }
        TempStr1 = str1;
        while (*TempStr1 != 0)
        {
            length++;
            TempStr1++;
        }
        length = length - Counter;

    }
    

    
    return length;
}


/*
    output : 
    10

*/