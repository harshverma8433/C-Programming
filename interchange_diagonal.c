#include <stdio.h>
void main(){
    int n,c,d,s;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter Element at [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
            s = a[i][j];
            a[i][j] = a[i][n-i-1]  ;
            a[i][n-i-1] = s;
            }
        }
    }

        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


// 1  2  3    
// 4  5  6   
// 7  8  9

// 00 01 02
// 10 11 12
// 20 21 22