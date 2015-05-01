#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =1;
    char b =2;
    float c =3;
    int * d =&a;
    char * e =&b;
    float * f =&c;

    printf("%d\t\t%x\n",a,d);
    printf("%d\t\t%x\n",b,e);
    printf("%f\t%x\n",c,f);
    return 0;
}
