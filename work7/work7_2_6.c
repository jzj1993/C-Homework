#include <stdio.h>
#include <stdlib.h>

int strcmp(char * str1,char * str2)
{
    int i=0;
    for(i=0;*(str1+i)||*(str2+i);i++)
    {
        if( *(str1+i) != *(str2+i) )
            return ( *(str1+i) - *(str2+i) );
    }
    return 0;
}

int main()
{
    char string_1[100];
    char string_2[100];

    printf("Input a string:\n");
    gets(string_1);

    printf("Input another string:\n");
    gets(string_2);

    printf("%d\n",strcmp(string_1,string_2));

    return 0;
}
