#include <stdio.h>

/* ------------- strchr -------------- */

unsigned char *my_strchr(unsigned char *str, unsigned char c);

int main()
{
    unsigned char name[30] = {"abdullah mostafa"};
    unsigned char *PtrChar = NULL;
    PtrChar = my_strchr(name, 'h');
    if (PtrChar == NULL)
    {
        printf("the char is not exist!\n");
    }
    else
    {
        printf("%c\n", *PtrChar);
    }

    PtrChar = my_strchr(name, 'c');
    if (PtrChar == NULL)
    {
        printf("the char is not exist!\n");
    }
    else
    {
        printf("%c\n", *PtrChar);
    }
    


    return 0;
}


unsigned char *my_strchr(unsigned char *str, unsigned char c)
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
            if (*TempStr == c)
            {
                RetValue = TempStr;
                printf("the char is exist : ");
                break;
            }
            TempStr++;
        }
    }

    return RetValue;
}

/*
    output : 

    the char is exist : h
    the char is not exist!

*/