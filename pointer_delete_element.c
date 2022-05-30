#include <stdio.h>
void main(){
    int n;
    printf("Enter the sixe of array: ");
    scanf("%d",&n);

    int a[n];
    int *p = a;

    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }

    int n1;
    printf("deleted element: ");
    scanf("%d",&n1);

    for(int i=0;i<n;i++){
        if(*(p+i) == n1){
            for(int j=i;j<n;j++){
                *(p+j) = *(p+(j+1));
            }
            n--;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }
}