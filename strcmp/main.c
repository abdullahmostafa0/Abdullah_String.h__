#include <stdio.h>

/* ------------- strcmp -------------- */
signed int my_strcmp(unsigned char *str1, unsigned char *str2);


int main()
{
    unsigned char name1[30] = {"AHMED"};
    unsigned char name2[30] = {"ahmed"};
    signed int ReturnValue = 0;
    
    ReturnValue = my_strcmp(name1, name2);
    printf("%i\n", ReturnValue);
    if (ReturnValue == -1)
    {
        printf("string one is less than string two\n");
    }
    else if (ReturnValue == 1)
    {
        printf("string two is less than string one\n");
    }
    else
    {
        printf("the two string are equal\n");
    }
    

    return 0;
}


signed int my_strcmp(unsigned char *str1,unsigned char *str2)
{
    unsigned char *TempStr1 = str1;
    unsigned char *TempStr2 = str2;
    signed int RetValue = 0;
    if (NULL == TempStr1 || NULL == TempStr2)
    {
        printf("Error! this function has NULL parameter\n");
    }
    else
    {
        while (*TempStr1 != 0 && *TempStr2 != 0)
        {
            if (*TempStr1 != *TempStr2)
            {
                if(*TempStr1 < *TempStr2)
                {
                    RetValue = -1;
                    break;
                }
                else
                {
                    RetValue = 1;
                    break;
                }
                
            }
            else
            {
                TempStr1++;
                TempStr2++;
                RetValue = 0;
            }

            
        }
    }

    return RetValue;
}


/*
    output :

    -1
    string one is less than string two
*/