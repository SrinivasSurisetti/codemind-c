#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        int x=a[i];
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
            if(a[j]==x)
            {
                c++;
            }
            }
        }
        if(c>0)
        {
            printf("%d ",x);
            break;
        }
        
    }
}