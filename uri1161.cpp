#include <stdio.h>
int main() {
    int i,m,n,fn=1,fm=1,sum;
    while(i>=EOF)
   {
     sum=0;
       scanf("%d %d",&m,&n);
       if(m>0)
       {
         for(i=1;i<=m;i++){
             fm=fm*i;
         }
       }
       else if(n>0){
         for(i=1;i<=n;i++){
             fn=fn*i;
         }
       }
       else
       else if(m==0 && n)
       sum = fm + fn;
       printf("%d\n",sum);
   }

    return 0;
}
