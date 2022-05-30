# include<stdio.h> 

int main(){
    int a1,a2,a3;
    printf("Enter angle 1: ");
    scanf("%d",&a1);
    printf("Enter angle 2: ");
    scanf("%d",&a2);
    a3 = 180-(a1+a2);
    printf("Third Angle: %d",a3);

    return 0; 

}