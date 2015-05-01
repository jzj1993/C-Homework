#include <stdio.h>
#include <stdlib.h>

void reverse_string(char * str)
{
    int len,i;
    char tmp;
    for(len=0;*(str+len);len++);
    for(i=0;i<len/2;i++)
    {
        tmp=*(str+i);
        *(str+i)=*(str+len-1-i);
        *(str+len-1-i)=tmp;
    }
}
int main()
{
    char string[100];
    printf("Input a string:\n")
    gets(string);
    reverse_string(string);
    printf("%s\n",string);
    return 0;
}
