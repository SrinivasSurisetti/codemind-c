#include<stdio.h>
int main()
{
    int n,i,s,rv=0;
    scanf("%d",&n);
    while(n!=0)
    {
        s=n%10;
        rv=rv*10+s;
        n=n/10;
    }
    printf("%d",rv);
}
