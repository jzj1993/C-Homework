#include <stdio.h>
#include <stdlib.h>

void swap(int * x,int * y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b,*p1,*p2;
    a=10; b=20; p1=&a; p2=&b;
    swap(p1,p2);
    printf("a=%d, b=%d\n",a,b);
    return 0;
}