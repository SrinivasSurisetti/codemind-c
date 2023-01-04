#include<stdio.h>
int main()
{
    int n,m,mn,h,i;
    scanf("%d%d",&n,&m);
    //mn=(n<m)?n:m;
    //while(1)
    for(i=1;i<=n && i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        {
            h=i;
        }
    }
    printf("%d",h);
}