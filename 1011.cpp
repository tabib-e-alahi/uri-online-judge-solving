#include<stdio.h>
int main()
{
    double R,v;
    scanf("%lf",&R);
    v = (4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n",v);
    return 0;

}
