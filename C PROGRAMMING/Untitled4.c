#include<stdio.h>
int main()
{
    float U,V,A,T;
    scanf("%f %f %f",&U,&V,&T);

    T=(V-U)/A;

    printf("%.1f\n",T);
    return 0;

}
