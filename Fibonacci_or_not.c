#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i,k=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       c=a+b;
       if(c==n)
       {
           k++;
           break;
       }
       a=b;
       b=c;
    }
    if(k!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}