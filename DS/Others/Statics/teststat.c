#include<stdio.h>
#include"stat.h"

int main(void)
{   
    int i,n;
    float res,lc,ms,sec;
    printf("Enter Least count:  ");
    scanf("%f",&lc);
    printf("Enter no of elements:  ");
    scanf("%d",&n);
    float a[n];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {   
        printf("MSC: ");
        scanf("%f",&ms);
        printf("SecSR: ");
        scanf("%f",&sec);
        a[i]=ms+(sec*lc);
    }
    for(i=0;i<n;i++)
    printf("%f ",a[i]);
    res = mean(a,n);
    printf("\nMean = %f\n",res);

    res = avdev(a,n);
    printf("Average deviation = %f\n",res);

    res = stddev(a,n);
    printf("Standard Deviation = %f",res);

/*
    printf("Enter your choice:  ");
    printf("1 . Mean\n2. Average Deviation\n3. Standard Deviation\n-1 Exit");
    int c;
    scanf("%d",&c);
    while(c!=-1)
    {
        switch(c)
        {
            case(1):
            res = mean(a,n);
            printf("Mean = %f\n",res);
            break;
            case(2):
            res = avgdev(a,n);
            printf("Average deviation = %f\n",res);
            break;
            case(3):
            printf("1. to ");
            break;
            default :
		    printf("\n!!! Enter a valid choice !!!\n");
        }
    printf("1 . Mean\n2. Average Deviation\n3. Standard Deviation\n-1 Exit");
    scanf("%d",&c);        
    }
*/
}