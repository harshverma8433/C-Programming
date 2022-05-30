#include <stdio.h>
void main(){
    int a=10,b=20;
    int *p = &a;
    int *q = &b;
    int **pp = &p;
    int **qq = &q;

    printf("%d %d\n",**pp,**qq);

    int c;
    c = **pp;
    **pp = **qq;
    **qq = c;

    printf("%d %d\n",**pp,**qq);



}