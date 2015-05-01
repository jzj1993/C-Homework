#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c,x1,x2,p;
    scanf("%lf%lf%lf",&a,&b,&c);
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    p=pow(b,2)-4*a*c;
    if(p>=0)
    printf("x1=%lf x2=%lf\n",x1,x2);
    else printf("无实数根");
    return 0;
}
