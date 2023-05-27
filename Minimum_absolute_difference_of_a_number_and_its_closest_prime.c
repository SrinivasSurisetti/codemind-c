#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int k=0;
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

int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
    {
        printf("0");
    }
    else
    {
        int lt,rt,d1,d2;
        for(int j=n+1;;j++)
        {
            if(prime(j))
            {
                rt=j;
                d1=rt-n;
                break;
            }
            
        }
        for(int j=n-1;;j--)
        {
            if(prime(j))
            {
                lt=j;
                d2=n-j;
                break;
            }
        }
        int min=d1<d2?d1:d2;
        printf("%d",min);
    }
}