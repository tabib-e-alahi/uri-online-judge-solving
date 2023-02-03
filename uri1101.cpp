
#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    do{
        scanf("%d %d",&m,&n);
    if(m>0 && n>0){
        for(i=n;i<=m;i++){
            printf("%d ",i);
            sum = sum + i;
        }
        printf("Sum = %d",sum);
    }
    }while(m>0 && n>0);
    if(m>0 && n>0){
        for(i=n;i<=m;i++){
            printf("%d ",i);
            sum = sum + i;
        }
        printf("%d\n",sum);
    }

    return 0;
}
