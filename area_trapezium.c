# include<stdio.h> 

int main(){
    float a,b,h,area;
    printf("Enter Base 1: ");
    scanf("%f",&a);
    printf("Enter Base 2: ");
    scanf("%f",&b);
    printf("Enter height: ");
    scanf("%f",&h);
    area = ((a+b)/2)*h;
    printf("Area of Trapezium is %f",area);
    return 0; 

}