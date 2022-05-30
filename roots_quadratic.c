# include<stdio.h> 
# include<math.h>
void main(){
    float a,b,c,d,r1,r2,i;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    d = (b*b)-(4*a*c);
    switch(d>0){
        case 1:
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("Root1 is %.2f\n",r1);
        printf("Root2 is %.2f\n",r2);
        break;

        case 0:
        switch(d<0){
            case 1:
                r1 = (-b)/(2*a);
                i = (sqrt(d))/(2*a);
                printf("Root1 is %.2f+%.2fi\n",r1,i);
                printf("Root2 is %.2f-%.2fi\n",r1,i);
                break;

            case 0:
                r1 = r2 = (-b)/(2*a);
                printf("Root1 is %.2f\n",r1);
                printf("Root2 is %.2f\n",r2);
                break;
        }

    }


    
}