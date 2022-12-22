#include<stdio.h> 
int main()
{
    int a,n,rv=0,s;
    scanf("%d",&s);
    n=s;
    while(n!=0)
    {
        a=n%10;
        rv=rv*10+a;
        n=n/10;
    }
    if(rv==s)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}