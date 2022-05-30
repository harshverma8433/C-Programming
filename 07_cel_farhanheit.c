# include<stdio.h> 

int main(){
    float c;
    printf("Enter Temperature in celsius: ");
    scanf("%f",&c);
    float f;
    f = (1.8*c)+32;
    printf("Temperature in Farhanheit is : %f",f);
    return 0; 

}