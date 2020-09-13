#include<stdio.h>
void main()
{
    int n,m;
    char c[20];
    scanf("%d%d ",&m,&n);
    gets(c);
    printf("%d %d\n",m,n);
    puts(c);

    /* scanf leaves a '/n'(new line character) behind so gets takes '/n' as input
    so this gets() will not work so space behind %d is required to capture that /n character */
    scanf("%d%d",&m,&n);
    gets(c);
    printf("%d %d\n",m,n);
    puts(c);

    // to enter a string with blankspace we can also use this
    scanf("%20[^\n]",c); //note we haven't used '&'
    /* we can also use "%[^\20]%*c"
     here [] is scanset character
     ^\n tells to take input untill new line doesn't get encountered 
     %*c reads new line character and * indicates that this new line character is discarded */
    printf("%s",c);
}