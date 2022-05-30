#include <stdio.h>
void main(){
    int n;
    printf("Enter yhe size of array: ");
    scanf("%d",&n);
    int a[n];
    int *p = a;

    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }


    int c = *(p+0);
    for(int i=1;i<n;i++){
        if(*(p+i) > c){
            c = *(p+i);
        }
    }
    printf("%d",c);
}