#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long int n,x;
        scanf("%ld%ld",&n,&x);
        if(n==1)
        {
            if(x%2==0)
            {
                printf("Even
");
            }
            else
            printf("Odd
");
        }
        else if(x%2==0)
        printf("Impossible
");
        else if(n%2==0)
        printf("Even
");
        else
        printf("Odd
");
    }
}