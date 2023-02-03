#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);

        if(n>0)
        {
            if(n%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else if(n%2!=0)
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if(n<0)
        {
            if(n%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else if
                (n%2!=0)
            {
                printf("ODD NAGATIVE\n");
            }
        }
        else if(n==0)
            printf("NULL\n");
    }

    return 0;


}
