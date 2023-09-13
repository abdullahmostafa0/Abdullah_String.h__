#include <stdio.h>

/* ------------- strncat -------------- */

unsigned char *my_strncat(unsigned char *DestStr,unsigned char *SrcStr, unsigned int size);


int main()
{
    unsigned char name1[30] = {"abdullah mostafa "};
    unsigned char name2[30] = {"abdull-gawad mohamed\n"};
    my_strncat(name1, name2, 12);
    printf("%s\n", name1);
    


    return 0;
}

unsigned char *my_strncat(unsigned char *DestStr,unsigned char *SrcStr, unsigned int size)
{
    unsigned char *TempDestStr = DestStr;
    unsigned char *TempSrcStr = SrcStr;
    if (NULL == TempDestStr || NULL == TempSrcStr)
    {   
        printf("Error! this function has NULL parameter\n");

    }
    else
    {
        while (*TempDestStr != 0)
        {
            TempDestStr++;
        }
        while (size--)
        {
            *TempDestStr++ = *TempSrcStr++;
        }
    }


    return DestStr;
}

/*
    output : 

    abdullah mostafa abdull-gawad
*/