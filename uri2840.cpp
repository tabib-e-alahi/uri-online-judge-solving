#include<stdio.h>
int main(){
  int n,r,l;
  double vs;
  scanf("%d %d",&r,&l);

  vs =(4.0/3)*(3.1415)*r*r*r;

  n=l/vs;

  printf("%d\n",n);
  return 0;
}
