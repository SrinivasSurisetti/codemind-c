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
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int k,t;
    for(int i=1;i<=n;i++)
    {
        k=0,t=0;
        if(n%i==0&&prime(n)&&n!=1)
        {
            k++;
            if(i==2)
            {
                t++;
            }
            else if(i==3)
            {
                t++;
            }
            else if(i==5)
            {
                t++;
            }
        }
        
    }
    if(t==k)
        {
            printf("Ugly Number");
        }
        else
        printf("Not Ugly Number");
}