#include<stdio.h>
int main()
{
    int n,a,b,countA=0,countB=0,i;
    while(1){
            scanf("%d",&n);
        if(n==0)
            break;
        else
        {
            countA=0;
            countB=0;
            for(i=1;i<=n;i++)
            {
                scanf("%d %d",&a,&b);
            if(a>b){
                countA++;//
            }
            else if(b>a){
                countB++;
            }
            }
            printf("%d %d",countA,countB);
        }
    }
    return 0;
}
