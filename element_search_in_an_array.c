#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=1;
            printf("True");
            break;
        }
    }
    if(f==0)
    {
        printf("False");
    }
}