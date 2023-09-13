#include <stdio.h>

/* ------------- strcat -------------- */

unsigned char *My_Strcat(unsigned char *DestStr,unsigned char *SrcStr);


int main()
{

    unsigned char name1[20] = {"abdullah "};
    unsigned char name2[40] = {"mostafaaa"};
    My_Strcat(name1, name2);
    printf("%s\n", name1);


    return 0;
}



unsigned char *My_Strcat(unsigned char *DestStr, unsigned char *SrcStr)
{
    unsigned char *TempDestStr = DestStr;
    unsigned char *TempSrcStr = SrcStr;
    unsigned char Counter = 0;

    if (NULL == TempDestStr || NULL == TempSrcStr)
    {
        printf("error! this function has NULL pointer\n");
    }
    else
    {
 
        while (*TempDestStr != 0)
        {
            TempDestStr++;
        }
        while (*TempSrcStr != 0)
        {
            *TempDestStr++ = *TempSrcStr++;
        }

        
        
    }



    return TempDestStr;
}


/*
    output :

    abdullah mostafaaa
*/