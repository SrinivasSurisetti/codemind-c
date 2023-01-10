#include<stdio.h>
int main()
{
    int a,b,c,mx,i;
    scanf("%d%d%d",&a,&b,&c);
    if(c<a&&c<b)
    {
        printf("%d",a+b);
    }
    else if(a<c&&a<b)
    {
        printf("%d",b+c);
    }
    else
    {
        printf("%d",a+c);
    }
}