#include <stdio.h>
int main()
{
    int a,b,i,d=0;
    while(1)
    {
        scanf("%d %d", &a,&b);
        if(a<=0 || b<=0)
            break;
        else
        {
            d=0;
            if(a<b)
            {
                for(i=a; i<=b; i++)
                {
                    printf("%d ",i);
                    d+=i;
                }
                printf("Sum=%d\n",i);
            }
            else if(a>b)
            {
                for(i=b; i<=a; i++)
                {
                    printf("%d ",i);
                    d+=i;
                }
                printf("Sum=%d\n",d);
            }
        }
    }
    return 0;
}
