#include<stdio.h>
void main()
{
 int a[20],n,i,j,s=0,c;

 for(i=0;i<6;i++)
 {
  c=1;
  puts("Enter element between 10 to 100 only\t");
  scanf("%d",&n);
  for(j=0;j<s;j++)
  {
   if(n==a[j])
   {c=0;
    break;
   }
  }
  if(c)
  {
   a[s]=n;
   s++;
  }

 }
 for(c=0;c<s;c++)
 {
  printf("%d  ",a[c]);
 }

}
