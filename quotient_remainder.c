# include<stdio.h> 

int main(){
    int a,b;
    int c,d;
    scanf("%d%d",&a,&b);
    c = (a/b);
    printf("The Quotient is %d\n",c);
    d = a%b;
    printf("The Remainder is %d\n",d);
    return 0; 

}