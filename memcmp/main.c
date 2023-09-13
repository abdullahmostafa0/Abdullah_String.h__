#include <stdio.h>

/* ------------- memcmp -------------- */

signed char My_MemCmp( void *SrcStr1, void *SrcStr2, unsigned int size);
unsigned char Name_1[10] = {"ABDULLAH"};
unsigned char Name_2[10] = {"abdullah"};
int main()
{

    char RetTest = 0;
    RetTest = My_MemCmp(Name_1, Name_2, 5);

    if(RetTest > 0) 
    {
        printf("str2 is less than str1");
    } 
    else if(RetTest < 0) 
    {
        printf("str1 is less than str2");
    } 
    else
    {
        printf("str1 is equal to str2");
    }


    return 0;
}


signed char My_MemCmp(void *SrcStr1, void *SrcStr2, unsigned int size)
{
    unsigned char *TempSrcStr1 = SrcStr1;
    unsigned char *TempSrcStr2 = SrcStr2;
    char RetValue = 0;
    if (NULL == SrcStr1 || NULL == SrcStr2)
    {
        printf("Error! memcompare has parameter NULL\n");
    }
    else
    {
        if (TempSrcStr1 == TempSrcStr2)
        {
            RetValue = 0;
        }
        else 
        {
            while (size--)
            {
                if (*TempSrcStr1 != *TempSrcStr2)
                {
                    RetValue = (*TempSrcStr1 < *TempSrcStr2) ? -1 : 1;
                    break;
                }
                else 
                {
                    TempSrcStr1++;
                    TempSrcStr2++;
                }
            }
        }
    }



return RetValue;


}

/*
    output : 

    str1 is less than str2

*/