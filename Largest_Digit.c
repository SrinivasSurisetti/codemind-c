#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int r,mx=n%10;
    n=n/10;
    while(n>0) {
        r=n%10;
        if(r>mx) {
            mx=r;
        }
        n/=10;
    }
    printf("%d",mx);

}