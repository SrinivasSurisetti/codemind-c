#include<stdio.h>
int main()
{
    int i,a[100],c=0,n;
    scanf("%d",&n);
    //int a[i];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}