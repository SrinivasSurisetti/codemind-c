#include<stdio.h>

int co(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else if(n==3)
    {
        return 4;
    }
    else 
    return co(n-1)+co(n-2)+co(n-3);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",co(n));
}