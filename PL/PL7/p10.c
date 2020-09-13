#include<stdio.h>
void main()
{
    int i,num,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    printf("enter number of salesperson");
    scanf("%d",&num);
    int salary[num-1];
    int gross[num-1];

    for(i=0;i<num;i++)
    {
        printf("enter gross sales of salesperson %d\t",i+1);
        scanf("%d",&gross[i]);
    }
    for(i=0;i<num;i++)
        salary[i]= 200+gross[i]*9/100;
        printf("\n\n");
    for(i=0;i<num;i++)
        printf("salary of salesman %d is %d\n",i+1, salary[i]);

    for(i=0;i<num;i++)
    {
        if (salary[i]>=200 && salary[i]<300)
            c1++;
        if (salary[i]>=300 && salary[i]<400)
            c2++;
        if (salary[i]>=400 && salary[i]<500)
            c3++;
        if (salary[i]>=500 && salary[i]<600)
            c4++;
        if (salary[i]>=600 && salary[i]<700)
            c5++;
        if (salary[i]>=700 && salary[i]<800)
            c6++;
        if (salary[i]>=800 && salary[i]<900)
            c7++;
        if (salary[i]>=900 && salary[i]<1000)
            c8++;
        if (salary[i]>=1000)
            c9++;
    }
     printf("\n\n");
            printf("%d salespersons have salary in range $200-$299\n",c1);
            printf("%d salespersons have salary in range $300-$299\n",c2);
            printf("%d salespersons have salary in range $400-$299\n",c3);
            printf("%d salespersons have salary in range $500-$299\n",c4);
            printf("%d salespersons have salary in range $600-$299\n",c5);
            printf("%d salespersons have salary in range $700-$299\n",c6);
            printf("%d salespersons have salary in range $800-$299\n",c7);
            printf("%d salespersons have salary in range $900-$299\n",c8);
            printf("%d salespersons have salary more than $999\n",c9);
}
