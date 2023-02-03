#include<stdio.h>
int main()
{
    int x;
    float y;
    double cons;
    scanf("%d %f",&x,&y);
    cons=x/y;
    printf("%.3lf km/l\n",cons);
    return 0;
}
