# include<stdio.h> 

void main(){
    int n,n3;
    scanf("%d",&n);
    int n1=0,n2=1;
    printf("%d %d ",n1,n2);
    for(int i=2;i<n;i++){
       
        n3 = n1+n2;

        n1=n2;
        n2=n3;
         if(n3==n){
            break;
        }
        printf("%d ",n3);

        
    }
    


}