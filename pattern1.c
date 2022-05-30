# include<stdio.h> 

void main(){
    int n,c=65;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",c);
        }
        printf("\n");
        c++;
    }
}