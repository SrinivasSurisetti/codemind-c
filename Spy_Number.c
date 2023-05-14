#include<stdio.h>
int main()
{
    int s=0,p=1,n,x;
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        s=s+x;
        p=p*x;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}