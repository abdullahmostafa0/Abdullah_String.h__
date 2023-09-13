#include <stdio.h>

/* ------------- strstr -------------- */

unsigned char *my_strstr(unsigned char *haystack, unsigned char *needle);

int main()
{
    unsigned char haystack[] = "PoTutorialsPoint";
    unsigned char needle[] = "Point";
    unsigned char *ret;

    ret = my_strstr(haystack, needle);

    printf("The substring is: %s\n", ret);

    return 0;
}

unsigned char *my_strstr(unsigned char *haystack, unsigned char *needle)
{
    unsigned char *TempHaystack = haystack;
    unsigned char *TempNeedle = needle;
    unsigned char *RetValue = NULL;
    if (NULL == TempHaystack || NULL == TempNeedle)
    {
        printf("Error! this function has NULL pointer parameter\n");
    }
    else
    {
        for (TempHaystack = haystack; *TempHaystack != 0; TempHaystack++)
        {
            
                if (*TempHaystack != *TempNeedle)
                {
                    TempNeedle = needle;
                    RetValue = NULL;
                    
                }
                else if (*TempHaystack == *TempNeedle)
                {
                    if (TempNeedle == needle)
                    {
                        RetValue = TempHaystack;
                    }
                    else if (*TempNeedle == 0)
                    {
                        break;
                    }

                    TempNeedle++;
                      
                }
                
        }
    }
    return RetValue;
}
/*
    output :
    The substring is: Point

*/