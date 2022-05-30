#include <stdio.h>
void main(){
    int n,c,f;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    c = a[0];
    for(int i=1;i<n;i++){
        if(c>a[i]){
            c = c;
        }
        else{
            c = a[i];
        }
        }
        
    printf("%d",c);
    
}
