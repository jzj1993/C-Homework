#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=5,n=8;
    int a[n],b[m];
    int *p=a,*q=b;
    int i;
    printf("Input %d intergers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<m;i++)
        *(q+i)=*(p+n-m+i);
    for(i=n-1;i>=0;i--)
        *(p+i)=*(p+i-m);
    for(i=0;i<m;i++)
        *(p+i)=*(q+i);

    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

    return 0;
}
