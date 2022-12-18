#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X=='a'||X=='e'||X=='i'||X=='o'||X=='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}