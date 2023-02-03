#include<stdio.h>
int main()
{
    int XXX,YYY,ZZZ,DD;
    char dt,dash;
    scanf("%d%c%d%c%d%c%d",&XXX,&dt,&YYY,&dt,&ZZZ,&dash,&DD);
    printf("%03d\n%03d\n%03d\n%02d\n",XXX,YYY,ZZZ,DD);

    return 0;
}
