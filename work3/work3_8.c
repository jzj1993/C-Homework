#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y1,y2,y3;
    scanf("%f",&x);
    y1=x;
    y2=2*x-1;
    y3=3*x*x-10;
    if(x<1)
    printf("%f\n",y1);
    else if(x>=1&&x<3)
    printf("%f\n",y2);
    else if(x>=3)
    printf("%f\n",y3);
    return 0;
}
