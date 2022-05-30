# include<stdio.h> 

int main(){
    float m1,m2,m3,m4,m5;
    float total,avg,percentage;
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    total = (m1+m2+m3+m4+m5);
    avg = (m1+m2+m3+m4+m5)/5;
    percentage = (m1+m2+m3+m4+m5)/5;
    printf("Total marks is: %0.2f\n",total);
    printf("Average marks is: %0.2f\n",avg);
    printf("percentage is: %0.2f\n",percentage);

    return 0; 

}