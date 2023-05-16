#include<stdio.h>
int main() {
    int n,x=0,y=0;
    scanf("%d",&n);
    while(n<0) {
        n=n*-1;
        x++;
    }
    while(n>0) {
        y=(y*10)+(n%10);
        n/=10;
    }
    if(x==0) printf("%d",y);
    else printf("%d",-1*y);
}