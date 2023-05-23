#include<stdio.h>

int ndivi(int n)
{
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            k++;
        }
    }
    if(k==9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,k=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(ndivi(i))
        {
            k++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",k);
}