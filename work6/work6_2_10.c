#include <stdio.h>
#include <stdlib.h>

int output(int n)
{
    int i;
    int s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}

int main()
{
    int m,n;
    printf("Input two intergers m, n:\n");
    scanf("%d%d",&m,&n);

    printf("%d! = %d\n",n,output(n));
    printf("%d!/%d!/(%d-%d)! = %f\n",m,n,m,n,((float)output(m)/output(n)/output(m-n)));
    return 0;
}