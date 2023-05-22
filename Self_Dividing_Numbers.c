#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int n=i,v=0;
        scanf("%d",&n);
        int m=n;
        int k=0;
        int r;
        if(n%10!=0)
        {
            while(n>0)
            {
                r=n%10;
                k++;
                if(m%r==0)
                {
                    v++;
                }
                n=n/10;
            }
            if(v==k)
            {
                printf("%d ",i);
            }
        }
    }
}