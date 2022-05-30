#include <stdio.h>
void main(){
    int n1,n2,n3;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter Second number: ");
    scanf("%d",&n2);
    printf("Enter Third number: ");
    scanf("%d",&n3);

    int *p,*q,*r;
    p = &n1;
    q = &n2;
    r = &n3;

    if((*p>*q) && (*p>*r)){
        printf("%d is largest",*p);
    }
    else if((*q>*p) && (*q>*r)){
        printf("%d is largest",*q);
    }
    else if((*r>*q) && (*r>*p)){
        printf("%d is largest",*r);

        
    }
}