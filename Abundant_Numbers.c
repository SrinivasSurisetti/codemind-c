#include<stdio.h>

int main()
{
    int n,fr=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
           fr=fr+i; 
        }
    }
    if(fr>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}