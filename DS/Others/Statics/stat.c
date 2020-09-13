#include<stdio.h>
#include<math.h>
int i;
float mean(float a[],int n)
{
    float fixi=0;
    for(i=0;i<n;i++)
        fixi+=a[i];
    return fixi/n;
}

float avdev(float a[],int n)
{
    float m,av=0,s;
    m = mean(a,n);
    for(i=0;i<n;i++)
        av += fabs(a[i]-m);
    return av/n;
}

float stddev(float a[],int n)
{
    float sv=0,m;
    m = mean(a,n);
    for(i=0;i<n;i++)
        sv+=pow(a[i]-m,2);
    return sqrt(sv/(n-1));
}