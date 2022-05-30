#include <stdio.h>
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    

    int a[n];

    int *p = a;

    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }

    int *sum;
    for(int i=0;i<n;i++){
        *sum += *(p+i);
    }

    float *avg;
    *avg = (float)*sum/n;
    printf("%f",avg);
}

// #include<stdio.h>
// int main()
// {
//     float x[5], sum=0.0, avg;
//     int i;
//     float *px, *psum, *pavg;

//     px = &x[0];  //  Or, px = &x;
//     psum = &sum, pavg = &avg;

//     printf("Enter array Elements: ");
//     for (i=0;i<5;i++)
//     {
//         scanf("%f",(px+i));
//         *psum += *(px + i);
//     }

//     *pavg = *psum / 5;
//     printf("Sum= %.2f \t Average= %.2f\n", *psum, *pavg);

//     return 0;
// }