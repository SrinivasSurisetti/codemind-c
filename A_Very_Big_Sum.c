#include<stdio.h>
int main()
{
    long long int i,n,s=0;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%lld",s);
}