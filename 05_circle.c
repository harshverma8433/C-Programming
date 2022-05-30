# include<stdio.h> 

int main(){
    int r,d;
    float c,a,pi=3.14;
    printf("Enter Radius of circle: \n");
    scanf("%d",&r);
    d = 2*r;
    printf("The Diameter of circle is: %d\n",d);
    c = 2*pi*r;
    printf("The Circumference of circle is: %0.2f\n",c);
    a = pi*r*r;
    printf("The Area of circle is: %0.2f\n",a);

    return 0; 

}