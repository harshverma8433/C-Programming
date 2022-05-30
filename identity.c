#include <stdio.h>
void main(){
    int r,c,f=0;
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<r;i++){
        if (f==0){
            break;
        }
        for(int j=0;j<c;j++){
            if(i == j){
                if(a[i][j] == 1){
                    f =1;
                }
                else{
                    f=0;
                    break;
                }
            }

            else{
                if(a[i][j] == 0){
                    f = 1;
                }
                else{
                    f=0;
                    break;
                }
            }
        }
    }

    if(f==1){
        printf("Identity Matrix");
    }
    else{
        printf("Non-identity Matrix");
    }

}

