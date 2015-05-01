#include <stdio.h>
#include <stdlib.h>

float x1,x2;
char statue=2;

void fac1(int a,int b,int c)
{
    statue=2;
    x1=((-1)*b+(float)sqrt(b*b-4*a*c))/2/a;
    x1=((-1)*b-(float)sqrt(b*b-4*a*c))/2/a;
}

void fac2(int a,int b,int c)
{
    statue=1;
    x1=x2=(-1)*b*0.5/a;
}

void fac3()
{
    statue=0;
}

int main()
{
    int a,b,c;
    printf("Input three intergers a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c>0) fac1(a,b,c);
    if(b*b-4*a*c==0) fac2(a,b,c);
    if(b*b-4*a*c<0) fac3();

    printf(" %dx*x+%dx+%d=0:\n\n",a,b,c);
    if(statue==2) printf("     x1=%f, x2=%f",x1,x2);
    if(statue==1) printf("     x1 = x2 = %f",x1,x2);
    if(statue==0) printf("     Wrong!");

    return 0;
}
