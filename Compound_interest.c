#include<stdio.h>
#include<math.h>
int main()
{
    double c,p,t,r,ci;
    scanf("%lf%lf%lf",&p,&r,&t);
    c=pow((1+(r/100)),t);
    ci=p*c;
    printf("%.2lf",ci);
}