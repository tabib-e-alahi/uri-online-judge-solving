#include<stdio.h>
int main()
{
    double t;
    scanf("%f",&t);
    int rem=t;
    int a;
    printf("NOTAS:\n");

    a=rem/100;
    rem=rem%100;
    printf("%d nota(s) de R$ 100.00\n",a);

    a=rem/50;
    rem=rem%50;
    printf("%d nota(s) de R$ 50.00\n",a);

    a=rem/20;
    rem = rem%20;
    printf("%d nota(s) de R$ 20.00\n",a);

    a=rem/10;
    rem=rem%10;
    printf("%d nota(s) de R$ 10.00\n",a);

    a=rem/5;
    rem =rem%5;
    printf("%d nota(s) de R$ 5.00\n",a);

    a=rem/2;
    rem = rem%2;
    printf("%d nota(s) de R$ 2.00\n",a);

    printf("MOEDAS:\n");

    a=rem/1;
    rem = rem%1;
    printf("%d moeda(s) de R$ 1.00\n",a);
    rem = rem%1;

    rem=rem*100;

    a=rem/50;
    rem = rem%50;
    printf("%d moeda(s) de R$ 0.50\n",a);

    a=rem/25;
    rem = rem%25;
    printf("%d moeda(s) de R$ 0.25\n",a);

    a=rem/10;
    rem = rem%10;
    printf("%d moeda(s) de R$ 0.10\n",a);

    a=rem/5;
    rem = rem%5;
    printf("%d moeda(s) de R$ 0.05\n",a);

    a=rem/1;
    rem = rem%1;
    printf("%d moeda(s) de R$ 0.01\n",a);


    return 0;
}
