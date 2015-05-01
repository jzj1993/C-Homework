#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,a,s;
    a=100;
    s=100;
    for(i=0;i<10;i++)
    {
        a/=2;
        s+=2*a;
    }
    printf("%f  %f\n",s,a);
    return 0;
}