#include<stdio.h>
int main()
{
    int n,k,m,b;
    scanf("%d%d%d",&n,&m,&k);
    b=n/(k*m);
    if(n%(k*m)!=0)
    {
        b++;
    }
    printf("%d",b);
}