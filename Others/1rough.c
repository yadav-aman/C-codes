#include<stdio.h>
void alter(char *s1,char *s2)
{
      char *t;
      t=s1;
      s1=s2;
      s2=t;
      printf("%s & %s\n",s1,s2);
}
void main()
{
      char x[]="First",y[]="Second";
      alter(x,y);
        printf("%s * %s",x,y);
}

