#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&p);
    n=p/4;
    if(p%4!=0)
    {
        n++;
    }
    printf("%d",n);
}