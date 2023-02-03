#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        scanf("%d",&t);
        if(t%2==0){
            if(t>0){
                printf("EVEN POSITIVE\n");
            }
            else if(t<0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("NULL\n");
            }
        }
    }
}
