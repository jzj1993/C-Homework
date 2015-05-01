#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_in_circle (double x, double y)
{
    if(x*x+y*y<=1) return 1;
    else return 0;
}

double MonteCarlo(int cnt)
{
    int i,t=0;
    double x,y;srand(time(0));
    for(i=0;i<cnt;i++)
    {

        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;
//      printf("%lf\t%lf\t%d\n",x,y,is_in_circle(x,y));
        if(is_in_circle(x,y))t++;
    }
    return (double)t*4.0/cnt;
}

int main()
{
    int cnt;
    printf("Input a interger:\n");
    scanf("%d",&cnt);
    printf("%lf",MonteCarlo(cnt));
    return 0;
}
