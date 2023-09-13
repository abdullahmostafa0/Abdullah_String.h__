#include <stdio.h>

/* ------------- strcpy -------------- */

char *my_strcpy(char *dest, char *src);
char ptr[30];
int main()
{
    
    
    
    my_strcpy(ptr, "abdullah");
    printf("%s\n", ptr);
    
    char ptr2[30];
    my_strcpy(ptr2, ptr);
    printf("%s\n", ptr);




    return 0;
}


char *my_strcpy(char *dest, char *src)
{
    char *TempDest = dest;
    char *TempSrc = src;
    if (NULL == TempDest || NULL == TempSrc)
    {
        printf("error! the function has null parameter\n");
    }
    else
    {
        while (*TempSrc != 0)
        {
            *TempDest++ = *TempSrc++;
        }
    }

    return dest;
}


/*
    output : 

        abdullah
        abdullah

*/