#include<stdio.h>
int main()
{
    int n,c=0,x,s;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        x=s%10;
        c=c+x;
        s=s/10;
    }
    if(c==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}