#include <stdio.h>
void main(){
   int n,c;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);    
   }
      
   int j;
    for (int i = 1; i < n; i++) {     
        c = a[i];                    
        
        j = i - 1;                  
  
        while(j>=0 && c <= a[j])
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = c;    
    }  

    for(int k=0;k<n;k++){
       printf("%d ",a[k]);
    }
}    