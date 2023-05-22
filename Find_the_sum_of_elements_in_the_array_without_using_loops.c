#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+x[i];
    }
    printf("%d",s);
}