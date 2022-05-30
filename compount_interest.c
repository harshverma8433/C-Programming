# include<stdio.h> 
# include<math.h>
int main(){
    float p,r,t,c,c_i;
    scanf("%f%f%f",&p,&r,&t);
    c = pow(1+(float)r/100,t);
    c_i = p*c;
    printf("%f",c_i);
    return 0; 

}