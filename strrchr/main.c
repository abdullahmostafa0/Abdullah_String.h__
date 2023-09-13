 #include <stdio.h>

/* ------------- strrchr -------------- */

unsigned char *my_strrchr(unsigned char *str, unsigned char ch);

 int main()
{
    unsigned char name1[] = "www.abdullah.com";
    unsigned char *ReturnValue = NULL;
    ReturnValue = my_strrchr(name1, '.');
    if (NULL == ReturnValue)
    {
        printf("The charcter was not found!\n");
    }
    else
    {
        printf("%s\n", ReturnValue);
    }

    return 0;
}

 unsigned char *my_strrchr(unsigned char *str, unsigned char ch)
 {
    unsigned char *TempStr = str;
    unsigned char *RetValue = NULL;
    if (NULL == TempStr)
    {
        printf("Error! this function has null parameter\n");
    }
    else
    {
        while (*TempStr != 0)
        {
            TempStr++;
        }
        while (TempStr >= str)
        {
            if (*TempStr == ch)
            {
                RetValue = TempStr;
                break;
            }
            TempStr--;
        }
    }

    return RetValue;
 }

 /*
    output :
    .com
 */