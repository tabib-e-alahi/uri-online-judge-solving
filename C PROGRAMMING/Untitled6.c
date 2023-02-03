#include<stdio.h>

    int main()
    {
     int i,n,j,sum=0,a,b, temp;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp=a;
             a=b;
             b=temp;
            for(j=a;j<=b;j++)
            {
                sum=sum+j;
            }
         }
         else if(b>a)
         {
             for(j=a;j<=b;j++)
            {
                sum=sum+j;
            }
         }
     printf("%d\n",sum,);

     }

     return 0;
    }
