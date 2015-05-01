#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score;
    scanf("%f",&score);
    if(score>=90&&score<=100)
    printf("A\n");
    else if(score>=80&&score<=89)
    printf("B");
    else if(score>=70&&score<=79)
    printf("C");
    else if(score>=60&&score<=69)
    printf("D");
    else printf("E");
    return 0;
}
