#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int f[n],i;
	f[0] = 0;
	f[1] = 1;
	printf("0 1 ");
	for (i=2 ; i<n ;i++) {
		f[i] = f[i-1] + f[i-2];
	printf("%d ",f[i]);
    }
}