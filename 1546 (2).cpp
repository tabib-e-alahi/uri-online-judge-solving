#include <stdio.h>

int main() {

 int i = 0, j = 0, a, b, c;

 scanf("%d", &a);

 for(i = 0; i < a; ++i)
 {
  scanf("%d", &b);

  for(j = 0; j < b; ++j)
  {
   scanf("%d", &c);

   if(c == 1){
    printf("Rolien\n");
  }else if(c == 2){
       printf("Naej\n");
   }else if(c == 3){
       printf("Elehcim\n");
   }else{
       printf("Odranoel\n");
   }
  }
 }

    return 0;
}
