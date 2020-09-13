#include<stdio.h>
void main()
{
    int n,i,j,c=0;
    printf("Enter the size of string:\t");
    scanf("%d",&n);
    char str1[n],str2[n]; //doubt n or n+1 for null pointer
    printf("Enter word one:\t");
    scanf("%s",str1);
    printf("Enter word two:\t");
    scanf("%s",str2);
    for(i=0;i<=n;i++) //doubt
    printf("#%d %d\n",str1[i],str2[i]); //doubt
    for(i=0;i<n;i++)
    {
        if(str1[i]>96)
            str1[i]=str1[i]-32;
        if(str2[i]>96)
            str2[i]=str2[i]-32;
    }
   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str1[i]==str2[j])
                {
                c++;
                break;
                }
        }
    }
    if(c==n)
        printf("Words are Anagram of each other.");
        else
        printf("Words are Not Anagram of each other.");

}
