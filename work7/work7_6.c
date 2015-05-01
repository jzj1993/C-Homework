#include <stdio.h>
#include <stdlib.h>

void del_char(char *p,char ch)
{
    int i;
    int num=0;
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)==ch) num++;
        else *(p+i-num)=*(p+i);
    }
    *(p+i-num)='\0';
}
int main()
{
    char string[]={"chinese"};
    char ch='e';
    del_char(string,ch);
    printf("%s\n",string);
    return 0;
}
