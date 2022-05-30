# include<stdio.h> 

int main(){
    float b,h,a;
    printf("Enter Base: ");
    scanf("%f",&b);
    printf("Enter Height: ");
    scanf("%f",&h);
    a = ((float)1/2)*b*h;
    printf("Area is: %f",a);
    return 0; 

}