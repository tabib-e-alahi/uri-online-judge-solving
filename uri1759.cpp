#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);

    while(i<=n)
    {
        if(i==n){
            printf("Ho!\n");
        }
        else if(i<n)
        {
            printf("Ho ");
        }
        i++;
    }
}
