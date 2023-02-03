#include<stdio.h>
#include<math.h>
int main()
{
    int d,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b+abs(a-b))/2;
    d=(d+c+abs(d-c))/2;

    printf("%d eh o maior\n",d);
    return 0;
}
