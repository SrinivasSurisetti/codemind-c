#include<stdio.h>

int  main() {
    int n;
    scanf("%d",&n);
    int a[n],e=0,ev=0;
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0;i<n;i++) {
        if(a[i]%2==0) {
            e++; 
        }
    }
    for (int i=0;i<n;i++) {
        if(a[i]%2==0 && i%2==0) {
            ev++; 
        }
    }
    if(e==ev) printf("True");
    else printf("False");
}