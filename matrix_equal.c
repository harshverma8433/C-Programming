#include<stdio.h>

void main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter Element at [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] == b[i][j]){
                c = 1;
            }
            else{
                c=0;
                break;
            }
        }
    }

    if(c==1){
        printf("Matrix are equal");
    }

    else{
        printf("Matrix are unequal");
    }

}


//  1 2     3 4 
//  3 4     4 1