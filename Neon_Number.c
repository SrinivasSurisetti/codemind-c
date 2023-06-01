#include<stdio.h>
int main()
{
    int a,sum=0,r,x;
    scanf("%d",&a);
    x=a*a;
    while(x!=0)
    {
        r=x%10;
        sum=sum+r;
        x=x/10;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}