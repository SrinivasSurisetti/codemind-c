#include<stdio.h>
int main()
{
    int n,i,m,t,r,rv;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,t,r,rv=0;
         scanf("%d",&m);
         t=m;
         while(t!=0)
    {
        r=t%10;
        rv=rv*10+r;
        t=t/10;
    }
    if(rv==m)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}