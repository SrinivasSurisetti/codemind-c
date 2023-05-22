
#include<stdio.h>

int main()
{
    int n,k=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            if(i==3)
            {
                printf("Pling");
                k++;
            }
            else if(i==5)
            {
                printf("Plang");
                k++;
            }
            else if(i==7)
            {
                printf("Plong");
                k++;
            }
            
        }
    }
    if(k==0)
    {
        printf("%d",n);
    }
}
