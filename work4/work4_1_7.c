#include <stdio.h>
#include <stdlib.h>
char i,a;
int main()
{
    for(i=1;i<5;i++)
    {
        for(a=4-i;a>0;a--) printf(" ");
        for(a=2*i-1;a>0;a--) printf("*");
        printf("\n");
    }
    for(i=3;i>0;i--)
    {
        for(a=4-i;a>0;a--) printf(" ");
        for(a=2*i-1;a>0;a--) printf("*");
        printf("\n");
    }
    return 0;
}
