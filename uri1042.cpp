#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c){
        printf("%d\n",a);
        if(b<c){
            printf("%d\n",b);
            printf("%d\n",c);
        }
        else if(c<b){
            printf("%d\n",c);
            printf("%d\n",b);
        }
    }
    if(a>b && b<c){
        printf("%d\n",b);
        if(a<c){
            printf("%d\n",a);
            printf("%d\n",c);
        }
        else if(c<a){
            printf("%d\n",c);
            printf("%d\n",a);
        }
    }
    if(c<b && a>c){
        printf("%d\n",c);
        if(b<a){
            printf("%d\n",b);
            printf("%d\n",a);
        }
        else if(a<b){
            printf("%d\n",a);
            printf("%d\n",b);
        }
    }
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);


    return 0;
}
