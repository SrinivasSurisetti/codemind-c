#include<stdio.h>
int main()
{
    int a,r=0,x;
    scanf("%d",&a);
    while(a!=0)
    {
        x=a%10;
        r=r*10+x;
        a=a/10;
    }
    printf("%d",r);
}