#include<stdio.h>
int main()
{
    int s=0,p=1,df,i,n;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        s+=i;
        p*=i;
        n=n/10;
    }
    df=p-s;
    printf("%d",df);
}