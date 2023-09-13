#include <stdio.h>

/* ------------- strspn -------------- */

unsigned int my_strspn(unsigned char *str1, unsigned char *str2);

int main()
{

    unsigned char name1[] = "ABDDC12EFG5";
    unsigned char name2[] = "ABDD99";
    unsigned int num = 0;
    num = my_strspn(name1, name2);
    printf("number of intial string matching : %i", num);

    return 0;
}
unsigned int my_strspn(unsigned char *str1, unsigned char *str2)
{
    unsigned int ReturnVal = 0;
    unsigned char *TempStr1 = str1;
    unsigned char *TempStr2 = str2;
    unsigned int Counter = 0;
    if (NULL == TempStr1 || NULL == TempStr2)
    {
        printf("Error! this function has NULL parameter\n");
    }
    else
    {
        for (TempStr1 = str1; *TempStr1 != 0; TempStr1++)
        {
            for (TempStr2 = str2; *TempStr2 != 0; TempStr2++)
            {
                if (*TempStr1 == *TempStr2)
                {
                    Counter++;
                    break;
                }
            }
        }
    }
    
    return Counter;

}

/*
    output :
    number of intial string matching : 4

*/