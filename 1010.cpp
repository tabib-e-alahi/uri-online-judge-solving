#include<stdio.h>
int main()
{
    int a,b;
    float c;
    scanf("%d %d %f",&a,&b,&c);
    int d,e;
    float f,res;
    scanf("%d %d %f",&d,&e,&f);

    res = (b*c)+(e*f);

    printf("VALOR A PAGAR: R$ %.2f\n",res);
    return 0;

}
