#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        long long int n,m,v=0;
        scanf("%lld%lld",&n,&m);
        for(long long int i=0;i<m;i++)
        {
            if((i*i)%m==n)
            {
                printf("%lld
",i);
                v++;
                break;
            }
        }
        if(v==0)
        {
            printf("-1
");
        }
    }
    
}