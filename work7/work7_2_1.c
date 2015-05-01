#include <stdio.h>
#include <stdlib.h>

int length(char string[])
{
    char * x = string;
    int i=0;
    for(i=0;*(x+i);i++);
    return i;
}
int main()
{
    char string[100];
    printf("Input a string:\n");
    gets(string);
    printf("Length of the string is %d.\n",length(string));
    return 0;
}
