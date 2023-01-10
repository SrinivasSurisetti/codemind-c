#include<stdio.h>
int main()
{
    int n,m,k,x;
    scanf("%d%d%d",&n,&m,&k);
    x=m*k;
    if(x>=n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}