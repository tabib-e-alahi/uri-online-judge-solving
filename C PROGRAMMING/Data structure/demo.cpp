#include<stdio.H>
int main(){
    int ar[100][100];
    int n,m,i,j;
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d %d",ar[i][j]);
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d %d",ar[i][j]);
        }
    }
}
