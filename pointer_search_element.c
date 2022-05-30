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

    int n1;
    printf("Search element: ");
    scanf("%d",&n1);

    for(int i=0;i<n;i++){
        if(*(p+i) == n1){
            printf("%d",i);
        }
    }
}