# include<stdio.h> 

int main(){
    int n;
    int i,j;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0; 

}

// # include<stdio.h> 

// void main(){
//     int n;
//     printf("Enter Any number: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("%d ",j+1);
//         }
//         printf("\n");
//     }
// }