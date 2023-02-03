#include<stdio.h>
int main()
{
    int d1;
    scanf("%d",&d1);
    int h1,m1,s1;
    scanf("%d:%d:%d",&h1,&m1,&s1);
    int d2;
    scanf("%d",&d2);
    int h2,m2,s2;
    scanf("%d:%d:%d",&h2,&m2,&s2);
    int W,X,Y,Z;
    if(s1 > s2)
    {
        m2=m2-1;
        s2=s2+60;
        Z=s2-s1;

        if(m1>m2)
            {
                h2=h2-1;
                m2=m2+60;
                Y=m2-m1;


                    if(h2<h1)
                {
                    d2=d2-1;
                    h2 = h2+24;
                    X=h2-h1;
                    W=d2-d1;
                }
                else if(h2>=h1)
                {
                    X = h2-h1;
                    W=d2-d1;
                }


            else if(m1<=m2)
            {
                Y=m2-m1;
                if(h2<h1)
                {
                    d2=d2-1;
                    h2 = h2+24;
                    X=h2-h1;
                    W=d2-d1;
                }
                else if(h2>=h1)
                {
                    X = h2-h1;
                    W=d2-d1;
                }
            }
        }
    }
    else if(s2>=s1)
    {
        Z=s2-s1;
         if(m1>m2)
            {
                h2=h2-1;
                m2=m2+60;
                Y=m2-m1;


                    if(h2<h1)
                {
                    d2=d2-1;
                    h2 = h2+24;
                    X=h2-h1;
                    W=d2-d1;
                }
                else if(h2>=h1)
                {
                    X = h2-h1;
                    W=d2-d1;
                }


            else if(m1<=m2)
            {
                Y=m2-m1;
                if(h2<h1)
                {
                    d2=d2-1;
                    h2 = h2+24;
                    X=h2-h1;
                    W=d2-d1;
                }
                else if(h2>=h1)
                {
                    X = h2-h1;
                    W=d2-d1;
                }
            }
        }
    }
    printf("%d days\n",W);
    printf("%d hours\n",X);
    printf("%d mins\n",Y);
    printf("%d sec\n",Z);
}
