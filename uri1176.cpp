#include<stdio.h>
int main()
{
    int fib[30],n;
    scanf("%d",&n);

        fib[0]=0;
        fib[1]=1;


        fib[n]=fib[n-1]+fib[n-2];


        printf("Fib(%d) = %d\n",n,fib[n]);

    return 0;
}
