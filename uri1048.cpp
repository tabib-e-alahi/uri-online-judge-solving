#include<stdio.h>
int main()
{
  float n,s,e;
  char ch = '%';
  scanf("%f",&n);
  if(n>=0 && n<=400.00){
    s = n+(n*0.15);
    e = n*0.15;
    printf("Novo salario: %.2f\n",s);
    printf("Reajuste ganho: %.2f\n",e);
    printf("Em percentual: 15 %c\n",ch);
  }
  else if(n>=400.01 && n<=800.00)
    {
    s = n+(n*0.12);
    e = n*0.12;
    printf("Novo salario: %.2f\n",s);
    printf("Reajuste ganho: %.2f\n",e);
    printf("Em percentual: 12 %c\n",ch);
  }
  else if(n>=800.01 && n<=1200.00)
    {
    s = n+(n*0.10);
    e = n*0.10;
    printf("Novo salario: %.2f\n",s);
    printf("Reajuste ganho: %.2f\n",e);
    printf("Em percentual: 10 %c\n",ch);
  }
  else if(n>=1200.01 && n<=2000.00)
    {
    s = n+(n*0.07);
    e = n*0.07;
    printf("Novo salario: %.2f\n",s);
    printf("Reajuste ganho: %.2f\n",e);
    printf("Em percentual: 7 %c\n",ch);
  }
  else if(n>2000.00)
    {
    s = n+(n*0.04);
    e = n*0.04;
    printf("Novo salario: %.2f\n",s);
    printf("Reajuste ganho: %.2f\n",e);
    printf("Em percentual: 4 %c\n",ch);
  }
  return 0;
}
