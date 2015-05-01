#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={121,5,64,131,134,15,1544,456,415,44};
    int max=array[0];
    char i;
    for(i=1;i<10;i++)
    {
        if(array[i]>max) max=array[i];
    }
    printf("%d\n",max);
    return 0;
}
