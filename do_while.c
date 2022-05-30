# include<stdio.h> 

void main(){
    int n;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    int i=n;

    for(i;i>=1;i--){
        printf("%d\n",i);
    }

    do
    {
        printf("%d\n",i);
        i--;
    } while (i>=1);
    
    
}