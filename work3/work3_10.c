#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char operator;
    scanf("%d%c%d",&x,&operator,&y);
    if(operator=='+')
    printf("x+y=%d\n",x+y);
    else if(operator=='-')
    printf("x-y=%d\n",x-y);
    else if(operator=='*')
    printf("x*y=%d\n",x*y);
    else if(operator=='/')
    printf("x/y=%f",(float)x/y);
    return 0;
}
