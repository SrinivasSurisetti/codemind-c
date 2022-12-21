#include<stdio.h>
int main()
{
	int i,n,max=0;
	scanf("%d",&n);
	int a[n];
	//readind ARRAY
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}
	printf("%d",max);
}