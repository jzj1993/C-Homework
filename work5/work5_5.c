#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[]={"I love you!"};
    char i;
    for(i=0;i<sizeof(array);i++)
        if(array[i]!='o') printf("%c",array[i]);
    return 0;
}
