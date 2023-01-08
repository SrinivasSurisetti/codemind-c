#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100],str2[100],c;
	int res,temp;
	scanf("%[^
]s",str);
	int i,j,len=0;
	len=strlen(str);
	i=0;
	j=len-1;
while(i<j)
{
	temp=str[i];
	str[i]=str[j];
	str[j]=temp;
	i++;
	j--;
}
		printf("%s ",str);
}
