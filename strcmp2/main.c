#include <stdio.h>

/* ------------- strcmp -------------- */
signed int my_strncmp(unsigned char *str1, unsigned char *str2, unsigned int size_c);

int main()
{
    unsigned char name1[30] = {"ahmed"};
    unsigned char name2[30] = {"AHMED"};
    
    signed RetValue = 0;
    RetValue = my_strncmp(name1, name2, 3);
    printf("%i\n", RetValue);
    if (RetValue == -1)
    {
        printf("string one is less than string two\n");
    }
    else if(RetValue == 1)
    {
        printf("string two is less than sring one\n");

    }
    else
    {
        printf("the two string is equal\n");
    }


    return 0;
}



signed int my_strncmp(unsigned char *str1, unsigned char *str2, unsigned int size_c)
{
    signed int RetValue = 0;
    unsigned char *TempStr1 = str1;
    unsigned char *TempStr2 = str2;
    if (NULL == TempStr1 || NULL == TempStr2)
    {
        printf("Error! the function has NULL parameter\n");
    }
    else
    {
        while (size_c--)
        {
            if (*TempStr1 != *TempStr2)
            {
                if (*TempStr1 < *TempStr2)
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

    1
    string two is less than sring one


*/