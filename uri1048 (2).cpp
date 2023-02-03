#include<stdio.h>
int main()
{
  float n,new,e;
  scanf("%f",&n);
  if(n>=0 && n<=400.00){
    new = n+(n*0.15);
    e = n*0.15;
    printf("Novo salario: %.2f\n",new);
    printf("Reajuste ganho: %.2f\n",e);
    printf("Em percentual: 15 %\n");
  }
  return 0;
}
