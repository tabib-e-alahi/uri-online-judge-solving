#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("How many numbers= ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter %d numbers= ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]<ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}
