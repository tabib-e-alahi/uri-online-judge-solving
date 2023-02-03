#include<stdio.h>
int main()
{
    int s,m,h;
    scanf("%d",&s);
    h=0;
    m=0;
    m=s/60;
    s = s%60;
    m = m/60;
    m = m%60;
    printf("%d:%d:%d\n",h,m,s);

    return 0;
}
