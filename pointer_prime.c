#include <stdio.h>
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    int *p = a;

    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }

    for(int i=0;i<n;i++){
        int c = *(p+i);
        int f=0;
        if(c==2){
            printf("%d is a prime number\n",*(p+i));
        }

        else{
        for(int j=2;j<c;j++){
            if(c%j != 0){
                f = 1;
            
        }
            else{
                f = 0;
                break;
            }
    }
        if(f==1){
            printf("%d is a prime number\n",*(p+i));
        }
        else{
            printf("%d is a not prime number\n",*(p+i));

        }

    }
    }
}