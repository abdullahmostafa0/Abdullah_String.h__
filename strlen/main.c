#include <stdio.h>

/* ------------- strlen -------------- */

unsigned int my_strlen(unsigned char *str);

int main()
{

    unsigned char name1[] = "abdullah mostafa";
    unsigned int length = my_strlen(name1);
    printf("the length of string is : %i\n", length);


    return 0;
}
unsigned int my_strlen(unsigned char *str)
{
    unsigned char *TempStr = str;
    unsigned int length = 0;
    if (NULL == TempStr)
    {
        printf ("Error! this function has null parameter\n");
    }
    else
    {
        while (*TempStr != 0)
        {
            length++;
            TempStr++;
        }
    }
    

    return length;

}

/*
    output :
    the length of string is : 16

*/

