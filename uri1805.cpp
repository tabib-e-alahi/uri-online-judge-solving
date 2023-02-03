#include<stdio.h>
int main()
{
    long long int a,b,n,s;
    scanf("%lld %lld",&a,&b);
   n=(b-a)+1;
    s=((float)n/2)*(a+b);/*where n=number of term(exp: in 2+3+4+5 has 4 terms so n=4),
                            a=1st term ,b=last term*/
    printf("%lld\n",s);
    return 0;
}
