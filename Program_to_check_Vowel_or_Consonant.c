#include<stdio.h>
int main()
{
    char n,a,A,e,E,i,I,o,O,u,U;
    scanf("%c",&n);
    if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}