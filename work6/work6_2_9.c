#include <stdio.h>
#include <stdlib.h>

float output(int m)
{
    float x=1;
    float i;
    if(m>1)
        for(i=2;i<=m;i++) x-=1/(i*i);
    return x;
}

int main()
{
    int a;
    printf("Input a interger:\n");
    scanf("%d",&a);
    printf("The result is %f\n",output(a));
    return 0;
}