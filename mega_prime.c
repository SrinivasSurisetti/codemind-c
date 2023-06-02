
#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int r,k=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            k++;
        }
    }
    if(k==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int dc(int n)
{
    int r,k=0;
    while(n>0)
    {
        r=n%10;
        k++;
        n=n/10;
    }
    return k;
}
int main()
{
    int n,t=0,r;
    scanf("%d",&n);
    int k=dc(n);
    if(prime(n))
    {
        while(n>0)
        {
            r=n%10;
            if(r!=1&&prime(r))
            {
                t++;
            }
            n=n/10;
            
        }
        if(t==k)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }   
    }
    else
    printf("Not Mega Prime");
    
}
