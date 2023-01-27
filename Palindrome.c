#include<stdio.h>
int main()
{
    int n,m,r,rev=0,i;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
