#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,d,r1,r2;
scanf("%lf %lf %lf",&a,&b,&c);
d = (b*b-4*a*c);
if(d>=0 && a!=0){
  r1 = (-b+sqrt(d))/(2*a);
  r2 = (-b-sqrt(d))/(2*a);
  printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
}
else
printf("Impossivel calcular\n");

return 0;
}
