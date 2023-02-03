#include<stdio.h>
int main()
{
    int x;
    float y;
    double avg;
    scanf("%d %f",&x,&y);
    avg = (x/y);
    printf("%.3lf km/l\n",avg);

    return 0;
}

