#include <stdio.h>
void main(){
    int n,c;
    scanf("%d",&n);
    int a[n];
    int n1;
    n1 = n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(n>0){

    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]){
            c = a[i+1];
            a[i+1] = a[i];
            a[i] = c;
        }
    }

    n--;
    }

    for(int i=0;i<n1;i++){
        printf("%d ",a[i]);
    }
}

// 43 76 99 34 8 