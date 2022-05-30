# include<stdio.h> 

int main(){
    float fa,c;
    printf("Enter temperature in farhanheit: ");
    scanf("%f",&fa);
    c = (0.55)*(fa-32);
    printf("Temperatur in celsius: %f",c);
    return 0; 

}