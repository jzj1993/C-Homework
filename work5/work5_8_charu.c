#include <stdio.h>

int Insertsort(int r[],int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        r[0]=r[i];
        j=i-1;
        while(r[0]<r[j])
        {
            r[j+1]=r[j];
            j--;
        }
        r[j+1]=r[0];
        for(j=1;j<=n;j++)printf("%d ",r[j]);
        printf("\n");
    }
}

int main()
{
    int n,i;
    int r[10];
    printf("Input 10 intergers:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&r[i]);
	Insertsort(r,n);
}
