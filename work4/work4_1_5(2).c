#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,s=0;

    for(i=1;;i++)
    {
        s+=(1/i);
        if(s>=2)break;
    }
    printf("%f    %f",i,s);

    return 0;
}
