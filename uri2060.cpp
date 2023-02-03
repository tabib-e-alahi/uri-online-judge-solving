#include<stdio.h>
int main()
{
    int n,l,i,countA=0,countB=0,countC=0,countD=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&l);
        if(l%2==0)
        {
            countA++;
        }
        else if(l%3==0)
        {
            countB++;
        }
        else if(l%4==0)
        {
            countC++;
        }
        else if(l%5==0)
        {
            countD++;
        }
    }
    printf("%d Multiplo(s) de 2\n",countA);
    printf("%d Multiplo(s) de 3\n",countB);
    printf("%d Multiplo(s) de 4\n",countC);
    printf("%d Multiplo(s) de 5\n",countD);
    return 0;
}
