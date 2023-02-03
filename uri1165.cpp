#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1 ; i<=t; i++)
        {
            scanf("%d",&n);
            int count=0;
            for(int j = 2;j<n;j++) {
                if (n % j == 0) {
                    count++;
                    break;
                }
                }
            if (count == 0){
                printf("%d eh primo\n",n);
            }
            else {
                printf("%d nao eh primo\n",n);
            }
        }
    return 0;
}
