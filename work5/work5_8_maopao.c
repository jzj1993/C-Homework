#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,t,a[10];

    printf("Please input 10 integers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<9;i++)
        for(j=0;j<10-i-1;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }

    printf("The sequence after sort is:\n");
    for(i=0;i<10;i++)
        printf("%-5d",a[i]);
    printf("\n");
    return 0;
}
