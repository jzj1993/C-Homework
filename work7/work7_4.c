#include <stdio.h>
#include <stdlib.h>

int find_max(int *arr,int len)
{
    int max=*arr;
    int i;
    for(i=1;i<len;i++)
    {
        if(max<*(arr+i)) max=*(arr+i);
    }
    return max;
}
int main()
{
    int a[]={88,9,6,100,56,89,56,28};
    int len=sizeof(a)/sizeof(a[0]);

    printf("%d\n",find_max(a,len));

    return 0;
}
