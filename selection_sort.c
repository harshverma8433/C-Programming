#include <stdio.h>
void main(){
    int n,m,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(a[i]>a[j]){
               c = a[j];
               a[j] = a[i];
               a[i] = c;

           }
       }
       }
        for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
}

// 12 43 55 11 87 
// 