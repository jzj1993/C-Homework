#include <stdio.h>
char x,y,z,flag=0;

int main()
{
    for(x=1;x<14;x++)
    {
        for(y=1;y<40-x;y++)
        {
            z=40-x-y;
            if(x*x+y*y+z*z==600) {flag=1;break;}
        }
        if(flag==1)break;
    }
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    return 0;
}
