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
    char string[100]={};
    char str[100]={};
    char *x = string;
    char *y = str;
    int m=5;
    int i;
    int n;

    printf("Input a string:\n");
    gets(string);

    for(i=m;*(x+i);i++)
        *(y+i-m)=*(x+i);

    n=length(string);
    printf("n= %d\tm= %d\n",n,m);
    printf("%s\n",str);
    return 0;
}
