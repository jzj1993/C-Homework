#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int i;
    if(n<=1) return 0;
    if(n==2) return 1;
    for(i=2; i<=(int)(sqrt(n)+1); i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int a;
    printf("Input a interger:\n");
    scanf("%d",&a);
    if(is_prime(a)) printf("It is a prime.");
    else printf("It is not a prime.");
    return 0;
}