#include<stdio.h>

void solve(int n,char rodFrom,char rodMiddle,char rodTo)
{
    if(n==1)
    {
        printf("#Plate 1 from %c to %c \n",rodFrom,rodTo);
        return;
    }

    solve (n-1,rodFrom,rodTo,rodMiddle);
    printf("@Plate %d from %c to %c\n",n,rodFrom,rodTo);
    solve(n-1,rodMiddle,rodFrom,rodTo);
}

int main(void)
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    solve(n,'A','B','C');
    return 0;
}