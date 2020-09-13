#include<stdlib.h>
#include<stdio.h>

struct costumers{
    long int acno;
    char name[10];
    float bal;
};

void details(struct costumers *ptr)
{
    printf("\nEnter Account number: ");
    scanf("%ld",&(ptr->acno));
    getchar();
    printf("Enter Name: ");
    gets(ptr->name);
    printf("Enter Balance: ");
    scanf("%f",&(ptr->bal));
}

void withdraw(struct costumers cust[],int n)
{
    int i;
    float rs;
    long int an;
    printf("Enter account number: ");
    scanf("%ld",&an);
    for(i=0;i<n;i++)
    {
        if(an==(cust[i].acno))
        {
            if((cust[i].bal)<=100)
            {
                printf("The balance is insufficient for the specific withdrawal");
            }
            else
            {
                printf("Current amount = Rs %.3f\n",cust[i].bal);
                printf("Enter the ammount to withdraw: ");
                scanf("%f",&rs);
                if(rs>cust[i].bal)
                printf("Balance Insufficient");
                else
                {
                    cust[i].bal=cust[i].bal-rs;
                    printf("Please collect your money!!!\n");
                    printf("Balance left is Rs %.3f",cust[i].bal);
                }
            }
            
        }
    }
}

void deposit(struct costumers cust[],int n)
{
    int i;
    float rs;
    long int an;
    printf("Enter account number: ");
    scanf("%ld",&an);
    for(i=0;i<n;i++)
    {
        if(an==cust[i].acno)
        {
            printf("Current amount = Rs %.3f\n",cust[i].bal);
            printf("Enter the amount to deposit: ");
            scanf("%f",&rs);
            cust[i].bal=cust[i].bal+rs;
            printf("Amount added\nUpdated balance = Rs %.3f",cust[i].bal);
        }
    }
    
}


void names(struct costumers cust[],int n)
{
    int i,c=1;
    printf("\nNames of all the costumers with bank balance less than Rs 100 are:\n");
    for(i=0;i<n;i++)
    {
        if(cust[i].bal<100)
        {
            printf("%d - %s\n",c,cust[i].name);
            c++;
        }
    }
}
void display(struct costumers cust[],int n)
{
    int i;
    long int an;

    printf("Enter account number: ");
    scanf("%ld",&an);
    for(i=0;i<n;i++)
    {
        if(an==cust[i].acno)
        {
            printf("Name = ");
            puts(cust[i].name);
            printf("Balance = %.3f",cust[i].bal);
        }
    }
}
int main(void)
{
    int i,n,c;
    printf("Enter the no of costumers:  ");
    scanf("%d",&n);
    getchar();
    struct costumers cust[n];
    printf("Enter details of the costumers:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter details of costumer %d",i+1);
        details(&cust[i]);
    }
    while(1)
    {
        printf("\n\nEnter your choice\n");
        printf("1. To withdraw money from particular bank account\n");
        printf("2. To deposit money to particular bank account\n");
        printf("3. To get names of all the costumers with bank balance less than Rs 100\n");
        printf("4. To view the deatils of an Account\n");
        printf("0. To EXIT\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                    withdraw(cust,n);    
                    break;
            case 2:
                    deposit(cust,n);
                    break;
            case 3:
                    names(cust,n);
                    break;
            case 4:
                    display(cust,n);
                    break;
            case 0:
                    exit(0);
            default:
                printf("Enter a Valid choice!!!");

        }
    }
    return 0;
}