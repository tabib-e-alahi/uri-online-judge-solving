#include<stdio.h>
int main()
{
    int xx,h1,m1,s1,yy,h2,m2,s2,r1,r2,w,x,y,z,sec;//w=days, x=hour, y=min, z=sec;
    scanf("%*s  %d",&xx);

    scanf("%d%*s%d%*s%d",&h1,&m1,&s1);

    scanf("%*s %d",&yy);

    scanf("%d%*s%d%*s%d",&h2,&m2,&s2);



    r1=(xx*86400)+(h1*3600)+(m1*60)+s1;
    r2=(yy*86400)+(h2*3600)+(m2*60)+s2;

    sec=(r2-r1);

    w=sec/86400;
    sec=sec%86400;
    x=sec/3600;
    sec=sec%3600;
    y=sec/60;
    z=sec%60;



    printf("%d dia(s)\n",w);
    printf("%d hora(s)\n",x);
    printf("%d minuto(s)\n",y);
    printf("%d segundo(s)\n",z);

    return 0;
}
