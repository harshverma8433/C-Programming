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

    int s;
    int n1=n;

    int i=0;
    while(n>0){
        for(int i=0;i<n;i++){
            if(*(p+i) > *(p+(i+1))){
                s = *(p+i) ;
                *(p+i) = *(p+i+1);
                *(p+i+1) = s;
            }
        }
        n--;
    }

    for(int i=0;i<n1;i++){
        printf("%d ",*(p+i));
    }
}