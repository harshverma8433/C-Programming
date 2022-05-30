# include<stdio.h> 
# include <math.h>
int main(){
    float a,b,c,s,q,area;
    printf("Enter The value of a: ");
    scanf("%f",&a);
    printf("Enter The value of b: ");
    scanf("%f",&b);
    printf("Enter The value of c: ");
    scanf("%f",&c);
    s = (a+b+c)/2;
    q = s*(s-a)*(s-b)*(s-c);
    area = sqrt(q);
    printf("Area of triangle using herons formula is %f",area);
    return 0; 

}