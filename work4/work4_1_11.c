#include <stdio.h>
#include<math.h>
double x1,x2,a;
int main()
{
    printf("Iuput One Number:\n");
    scanf("%lf",&a);
    if(a<0) printf("erorr");
    else
    {
        x2=1.0;
        do
        {
            x1=x2;
            x2=(x1+a/x1)*0.5;
        }
        while(fabs(x1-x2)>=1e-5);
        printf("%f\n",x2);
    }
    return 0;
}
