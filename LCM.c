#include<stdio.h>
int main()
{
    int n,m,mx,lcm;
    scanf("%d%d",&n,&m);
    mx=(n>m)?n:m;
    while(1)
    {
        if(mx%n==0&&mx%m==0)
        {
           lcm=mx;
           break;
        }
        mx++;
    }
     printf("%d ",mx);
}