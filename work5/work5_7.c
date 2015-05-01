#include <stdio.h>
#include <stdlib.h>

float product(float x,float y)
{
    return(x*y);
}

float quotient(float x,float y)
{
    if(y!=0) return(x/y); else return 0;
}

int main()
{
    float a,b;
    printf("Input 2 numbers a,b:\n");
    scanf("%f%f",&a,&b);
    if(b==0) printf("Wrong input!");
    else
    printf("a\t= %f\nb\t= %f\na*b\t= %f\na/b\t= %f\n",a,b,product(a,b),quotient(a,b));
    return 0;
}
