//Row=Even, Col=Even >>>> White
//Row=Odd, Col=Odd >>>> White
//Row=Even, Col=Odd >>>> Black
//Row=Odd, Col=Even >>>> Black

#include<stdio.h>
int main()
{
    int row;
    scanf("%d",&row);
    int col;
    scanf("%d",&col);
    if(row%2==0 && col%2!=0)
    {
        printf("0\n");
    }
    else if(row%2!=0 && col%2==0)
    {
        printf("0\n");
    }
     else if(row%2!=0 && col%2!=0)
    {
        printf("1\n");
    }
    else if(row%2==0 && col%2==0)
    {
        printf("1\n");
    }
    return 0;
}
