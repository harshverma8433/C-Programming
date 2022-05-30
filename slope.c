# include<stdio.h> 
# include<math.h>
int main(){
    float x,y,p,q;
    printf("Enter The value of x: ");
    scanf("%f",&x);
    printf("Enter The value of y: ");
    scanf("%f",&y);
    printf("Enter The value of p: ");
    scanf("%f",&p);
    printf("Enter The value of q: ");
    scanf("%f",&q);
    float xp,yp,xq,yq,slope;
    xp = x*p;
    yp = y*p;
    xq = x*q;
    yq = y*q;
    slope = (yq-yp)/(xq-xp);
    printf("Slope is %f\n",slope);

    float angle;
    angle = atan(slope);
    printf("Angle of inclination is %f",angle);
    return 0; 

}