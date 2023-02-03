#include<stdio.h>
int main(){
  int t,a,i,sum=0,rab=0,rat=0,frog=0;
  float pc,pr,ps;
  char ch;
  scanf("%d",&t);
  for(i=1;i<=t;i++){
    scanf("%d %c",&a,&ch);
    sum+=a;
    if(ch=='C'){
      rab+=a;
    }
    else if(ch=='R'){
      rat+=a;
    }
    else if(ch=='S'){
      frog+=a;
    }
    }
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",rab);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);

    pc = ((float)rab/sum)*100;
    pr = ((float)rat/sum)*100;
    ps = ((float)frog/sum)*100;

    printf("Percentual de coelhos: %.2f %%\n",pc);
    printf("Percentual de ratos: %.2f %%\n",pr);
    printf("Percentual de sapos: %.2f %%\n",ps);

  return 0;
}
