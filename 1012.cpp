#include<stdio.h>
int main()
{
    double a,b,c,tri,tra,cir,qua,rec;
    scanf("%lf %lf %lf",&a,&b,&c);
    tri = (.5*a*c);
    cir = (3.14159*c*c);
    tra = ((a+b)*.5*c);
    qua = (b*b);
    rec = (a*b);
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",qua);
    printf("RETANGULO: %.3lf\n",rec);

    return 0;
}
