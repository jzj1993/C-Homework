#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[4][4]={0};
    char i;
    int a=0,b=0;

    printf("Input 16 interger:\n");
    for(i=0;i<16;i++)
        scanf("%d",&array[i/4][i%4]);

    for(i=0;i<4;i++)
    {
        a+=array[i][i];
        b+=array[i][3-i];
    }

    printf("\nThe array is:\n");
    for(i=0;i<16;i++)
    {
        printf("%d\t",array[i/4][i%4]);
        if((i+1)%4==0) printf("\n");
    }

    printf("\n");
    printf("a=%d\nb=%d",a,b);
    return 0;
}
