#include<stdio.h>
void main(){
    int n,s=0;
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    int c[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
  
    
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            s=0;
        s += (a[i][j] + b[i][j]);
        c[i][j] = s;
    }
    }
    
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",c[i][j]);
    }
        printf("\n");
    }
    
    
}

//  1 2 3    2 3 4
//  4 5 6    1 3 5
//  7 8 9    6 3 1              