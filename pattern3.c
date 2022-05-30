# include<stdio.h> 

void main(){
    int n;
    printf("Enter Any number: ");
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        for(int i=n-k;i>0;i--){
            printf(" ");
        }
            for(int j=0;j<=k;j++){
                printf("* ");
            }
            printf("\n");
        }
}