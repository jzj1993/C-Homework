#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={121,5,64,131,134,15,1544,456,415,44};
    int b[9];
    char i;
    for(i=0;i<9;i++)
    {
        b[i]=a[i+1]/a[i];
    }
    for(i=0;i<9;i++)
    {
        printf("%d\t",b[i]);
        if((i+1)%3==0) printf("\n");
    }
    return 0;
}
