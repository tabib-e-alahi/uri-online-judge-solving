#include<stdio.h>
int main()
{
    int A[5],i;
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    if(A[0]<A[1] && A[1]<A[2] && A[2]<A[3] && A[3]<A[4])
    {
        printf("C\n");
    }
    else if(A[0]>A[1] && A[1]>A[2] && A[2]>A[3] && A[3]>A[4])
    {
        printf("D\n");
    }
    else{
        printf("N\n");
    }

    return 0;

}
