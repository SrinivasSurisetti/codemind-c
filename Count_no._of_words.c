#include<stdio.h>
int main()
{
    char i,c=1,str[111];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        c++;
    }
    printf("%d",c);
}