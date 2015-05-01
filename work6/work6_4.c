#include <stdio.h>
#include <stdlib.h>

int my_strlen(char arr[80])
{
    int i;
    for(i=0;arr[i]!='\0';i++);
    return i;
}

int main()
{
    char arr[80];
    printf("Input an string:\n");
    gets(arr);
    printf("%d",my_strlen(arr));
    return 0;
}
