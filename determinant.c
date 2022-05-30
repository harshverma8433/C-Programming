#include <stdio.h>
void main(){
    int n,c;
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter Element at [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int det;
    det = a[0][0]*((a[1][1]-a[2][2])-(a[1][2]-a[2][1])) - a[0][1]*((a[1][0]-a[2][2])-(a[1][2]-a[2][0])) + a[0][2]*((a[1][0]-a[2][1])-(a[1][1]-a[2][0]));

    printf("Determinant is %d",det);
}
