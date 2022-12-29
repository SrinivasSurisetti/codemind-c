#include<stdio.h>
int main()
{
    int i,av,n,a[n],s=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    av=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=av)
        {
            c++;
        }
    }
    printf("%d",c);
}