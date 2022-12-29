#include<stdio.h>
int main()
{
    float a,u,b;
    scanf("%f",&u);
    if(u<200)
    {
        a=u*1.20;
    }
    else if(u>=200 && u<400)
    {
        a=u*1.50;
    }
    else if(u>=400 && u<600)
    {
        a=u*1.80;
    }
    else if(u>=600)
    {
        a=u*2.00;
    }
    if(a>400)
    {
        b=a+a*0.15;
    }
    else
    {
        b=a+100;
    }
    printf("%.2f",b);
}