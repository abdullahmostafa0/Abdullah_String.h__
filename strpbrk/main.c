#include <stdio.h>

/* ------------- strpbrk -------------- */

unsigned char *my_strpbrk(unsigned char *str1, unsigned char *str2);

int main()
{

    unsigned char name1[] = "abdullah";
    unsigned char name2[] = "mohamed";
    unsigned char *ReturnValue = NULL;
    ReturnValue = my_strpbrk(name1, name2);
    if (NULL == ReturnValue)
    {
        printf("There is no matches characters\n");
    }
    else
    {
        printf("the first character matches is : %c", *ReturnValue);
    }



    return 0;
}




unsigned char *my_strpbrk(unsigned char *str1, unsigned char *str2)
{

    unsigned char *TempStr1 = str1;
    unsigned char *TempStr2 = str2;
    unsigned char *RetValue = NULL; 
    if (NULL ==  TempStr1 || NULL == TempStr2)
    {
        printf("Error! this function has null parameter\n");
    }
    else
    {   
        for (TempStr2 = str2; *TempStr2 != 0; TempStr2++)
        {
            for (TempStr1 = str1; *TempStr1 != 0; TempStr1++)
            {
                if (*TempStr1 == *TempStr2)
                {
                    if(*TempStr1 == '0')
                    {

                    }
                    else
                    {
                        RetValue = TempStr1;
                    }
                }
            }
        }
    }

    return RetValue;
}


/*
    output :
    the first character matches is : d

*/