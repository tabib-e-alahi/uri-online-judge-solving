#include <stdio.h>
#include <math.h>

int main(){
        int num, x, y;
        char p;

        scanf("%d", &num);
        scanf("%d %c %d", &x, &p, &y);

        if(p == '+')
                if(x + y <= num)
                        printf("OK\n");
                else
                        printf("OVERFLOW\n");
        else
                if(x * y <= num)
                        printf("OK\n");
                else
                        printf("OVERFLOW\n");

        return 0;
}
