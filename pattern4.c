# include<stdio.h> 

void main(){
    int n,c=97;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",c);
            c++;
            if(c==123){
                c=97;
            }
        }
        printf("\n");
    }
}