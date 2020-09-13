#include<stdio.h>

struct date{
    int day,month,year;
};

struct employee{
    unsigned int empcode;
    char name[10];
    struct date doj;
};

void ent_date(struct date *d)
{
    printf("Enter Day (1-31): ");
    scanf("%d",&d->day);
    while (d->day<1 || d->day>31)
    {
        printf("Enter a valid date (1-31): ");
        scanf("%d",&d->day);
    }

    printf("Enter month (1-12): ");
    scanf("%d",&d->month);
    while (d->month<1 || d->month>12)
    {
        printf("Enter a valid month (1-12): ");
        scanf("%d",&d->month);        
    }

    printf("Enter year (1000-9999): ");
    scanf("%d",&d->year);
    while(d->year<1000 || d->year >9999)
    {
        printf("Enter a valid year (1000-9999): ");
        scanf("%d",&d->year);
    }
    getchar();
}

void details(struct employee *emp)
{
    printf("Enter Name of the employee:  ");
    gets(emp->name);
    printf("Enter employee code:  ");
    scanf("%u",&emp->empcode);
    getchar();
    printf("Enter Date of joining -\n");
    ent_date(&emp->doj);
}

int main(void)
{   
    int n,i;
    printf("Enter number of emoployees:\t");
    scanf("%d",&n);
    getchar();
    struct employee emp[n];
    printf("Enter the details of the employee:\n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of the employee %d\n",i+1);
        details(&emp[i]);
    }

    struct date in;
    printf("\n\nEnter current date -\n");
    ent_date(&in);

    for(i=0;i<n;i++)
    {
        if(in.year-3>=emp[i].doj.year)
        {
            if(in.month>=emp[i].doj.month)
            {
                if(in.day>=emp[i].doj.day)
                {
                    printf("%s completed 3 years\n",emp[i].name);
                }
            }
        }
    }
    return 0;
}