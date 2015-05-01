#include <stdio.h>
#include <stdlib.h>
int n=0,sum;
int main()
{
    while(n+=1)
    {
       sum+=n;
       if(sum>=1000)break;
    }
    printf("最小的正整数N为%d,前N项和为%d\n",n,sum);
    return 0;
}
