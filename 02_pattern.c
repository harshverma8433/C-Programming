# include<stdio.h> 

int main(){
    int n;
    int i,j;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=65;j<=i;j++){
            printf("%c ",j);
            }
        printf("\n");
        }
       
    return 0; 

}