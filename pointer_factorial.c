#include <stdio.h>
void main(){
    int n,fac;
    printf("Enter any number: ");
    scanf("%d",&n);

    int *p = &fac;

    *p = 1;

    for(int i=1;i<=n;i++){
        *p = *p * i;
    }

    printf("%d",*p);


}