#include<stdio.h>
int main()
{
    int t,x,y,i;
    float d;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
    }
    if(y==0){
            printf("divisao impossivel\n");
        }
        else
        {
         d = (float)x/y;
         printf("%.1f\n",d);
        }
    return 0;
}
