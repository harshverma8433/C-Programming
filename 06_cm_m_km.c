# include<stdio.h> 

int main(){
    float l;
    printf("Enter Length in cm: ");
    scanf("%f",&l);
    float m,km;
    m = l/100;
    km = l/100000;
    printf("Length in m is: %f\n",m); 
    printf("Length in km is: %f\n",km); 
    return 0; 

}