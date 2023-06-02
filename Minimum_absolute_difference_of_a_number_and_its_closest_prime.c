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
    
        int n,min,d1,d2;
        scanf("%d",&n);
        int rp,lp;
        if(prime(n))
        {
            printf("0");

        }
        else
        {
			for(int j=n+1;;j++)
            {
                if(prime(j))
                {
                    rp=j;
                    d1=j-n;
                    break;
                }
            }
            for(int j=n-1;;j--)
            {
                if(prime(j))
                {
                    lp=j;
                    d2=n-j;
                    break;
                }
            }
            min=d1<d2?d1:d2;
            printf("%d
",min);
        }
}