#include<stdio.h>
int main()
{
    float n;
    int rem;
    scanf("%f",&n);
    printf("NOTAS:\n");
    printf("%.0f nota(s) de R$ 100.00\n",n/100);
    rem = n%100;
    printf("%.0f nota(s) de R$ 50.00\n",rem/50);
    rem = rem%50;
    printf("%.0f nota(s) de R$ 20.00\n",rem/20);
    rem = rem%20;
    printf("%.0f nota(s) de R$ 10.00\n",rem/10);
    rem = rem%10;
    printf("%.0f nota(s) de R$ 5.00\n",rem/5);
    rem = rem%5;
    printf("%.0f nota(s) de R$ 2.00\n",rem/2);
    rem = rem%2;
    printf("MOEDAS:\n");
    printf("%.0f moeda(s) de R$ 1.00",rem/1);
    rem = rem%1;
    printf("%d moeda(s) de R$ 0.50",rem/0.50);
    rem = rem%0.50;
    printf("%d moeda(s) de R$ 0.25",rem/0.25);
    rem = rem%0.25;
    printf("%.0f moeda(s) de R$ 0.10",rem/0.10);
    rem = rem%0.10;
    printf("%.0f moeda(s) de R$ 0.05",rem/0.05);
    rem = rem%0.05;
    printf("%.0f moeda(s) de R$ 0.01",rem/0.01);


    return 0;
}
