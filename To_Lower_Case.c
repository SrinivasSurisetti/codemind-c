#include<stdio.h>
int main()
{
    char str[121]; 
    int len=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
        	str[i]=str[i]+32;
		}
    }
    printf("%s",str);
}
