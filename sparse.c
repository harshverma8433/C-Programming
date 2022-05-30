#include <stdio.h>
void main(){
    int r,c,z=0,nz=0;
    printf("Enter Rows: ");
    scanf("%d",&r);
    printf("Enter Columns: ");
    scanf("%d",&c);
    int a[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter Element at [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j] == 0){
                z += 1;
            }
            else{
                nz += 1;
            }
        }
    }

    if(z>nz){
        printf("Sparse Matrix");
    }
    else{
        printf("not a Sparse Matrix");

    }

 
}

