#include <stdio.h>
int main()
{
   int i,n,j=0,highest=0;
    for(i=1;i<=100;i++)
   {
      scanf("%d",&n);
      if(highest<n)
   {
    highest=n;
    j=i;
   }
   }
   printf("%d\n",highest);
   printf("%d\n",j);
   return 0;
}
