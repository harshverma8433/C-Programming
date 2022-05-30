#include <stdio.h>
void main(){
    int n,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2 == 0){
            c += 1;
        }
        else{
            d += 1;
        }
    }
    printf("even-%d\nodd-%d",c,d);
    }
