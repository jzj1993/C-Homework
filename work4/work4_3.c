#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i,a,s;
    for(i=1;i<1000;i++)
    {
        s=0;
        for(a=1;a<i;a++)
        {
            if(i%a==0)s+=a;
        }
        if(s==i)
        {
            printf("%d its factors are ",i);
            for(a=1;a<i;a++)
            {
                if(i%a==0)printf("%d,",a);
            }
            printf("\b \n");
        }
    }
    
    return 0;
}