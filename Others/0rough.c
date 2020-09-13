#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(void) {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j;
    scanf("%d",&n);
    int a[n],s[n+1];
    s[0]=0;
    
    for(i=0,j=1;i<n;i++,j++)
    {
        scanf("%d",&a[i]);
        s[j]=a[i]+s[j-1];
    }

    int q;
    scanf("%d",&q);
    int b[2*q];
    
    for(i=0;i<(2*q);i++)
        scanf("%d",&b[i]);
    int x,y;
    
    for(i=0;i<(2*q);i+=2)
    {
            x = b[i];
            y = b[i+1];
            printf("%d\n",s[y+1]-s[x]);
    }
    
    
    return 0;
}