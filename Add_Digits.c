#include<stdio.h>

int add(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s,r;
    do
    {
        s=add(n);
        n=s;
    }while(n>9);
    printf("%d",n);
}