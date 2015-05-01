#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6]={1,3,5,7,9};
    char i,position=5;
    int tmp=0;

    printf("Input a interger:\n");
    scanf("%d",&tmp);
    for(i=0;i<5;i++)
    {
        if(tmp<arr[i])
        {
            position=i;
            break;
        }
    }
    for(i=5;i>position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=tmp;
    for(i=0;i<6;i++)printf("%d\t",arr[i]);
    return 0;
}
