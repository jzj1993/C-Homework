#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[80]={""};
    char i;
    char capital   = 0;
    char lowercase = 0;
    char num       = 0;
    char other     = 0;
    unsigned char tmp;

    printf("Input a string:\n");
    gets(string);
    for(i=0;(tmp=string[i])!='\0';i++)
    {
        if(tmp>=48 && tmp<=57)num++;
        if(tmp>=65 && tmp<=90)capital++;
        if(tmp>=97 && tmp<=122)lowercase++;
        other++;
    }
    other-=(num+capital+lowercase);
    printf("Number:\t\t%d\nCapital:\t%d\n",num,capital);
    printf("Lowercase:\t%d\nOther:\t\t%d\n",lowercase,other);
    return 0;
}
