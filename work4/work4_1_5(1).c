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
    printf("��С��������NΪ%d,ǰN���Ϊ%d\n",n,sum);
    return 0;
}
