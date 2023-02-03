#include<stdio.h>
int main()
{
    int n=10,i,j;
    char name[30];

    for(i=1;i<=n;i++)
    {
        scanf("%s",&name);
        if(i==3||i==7||i==9){
            printf("%s\n",name);}
    }



       return 0;
}
