#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        if(a!=b && b!=c && a!=c){
            printf("Valido-Escaleno\n");
            if((a*a+b*b)==c*c || (a*a+c*c)==b*b || (b*b+c*c)==a*a){
                printf("Retangulo: S\n");
            }
            else
            {
                printf("Retangulo: N\n");
            }
        }
        else if((a==b && b!=c) || (b==c && c!=a) || (a==c && a!=b)){
            printf("Valido-Isoceles\n");
             if((a*a+b*b)==c*c || (a*a+c*c)==b*b || (b*b+c*c)==a*a){
                printf("Retangulo: S\n");
            }
            else
            {
                printf("Retangulo: N\n");
            }
        }
        else if(a==b && b==c){
            printf("Valido-Equilatero\n");
           if((a*a+b*b)==c*c || (a*a+c*c)==b*b || (b*b+c*c)==a*a){
                printf("Retangulo: S\n");
            }
            else
            {
                printf("Retangulo: N\n");
            }
        }
    }
    else
        printf("Invalido\n");
}
