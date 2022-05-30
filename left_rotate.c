#include <stdio.h>
void main(){
    int n,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int n1;
    scanf("%d",&n1);

    while(n1>0){
        c = a[0];
        for(int i=0;i<n;i++){
            a[i] = a[i+1];
        }
        a[n-1] = c;
        n1--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}