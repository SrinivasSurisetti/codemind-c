#include<stdio.h>
#include<string.h>
int main() {
    char s[6789],ans;
    scanf("%s",s);
    int n=strlen(s);
    for (int i=0;i<n;i++) {
        if(s[i]==46) {
              printf("[.]");  
        }
        else printf("%c",s[i]);
    }
}