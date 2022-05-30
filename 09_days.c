#include <stdio.h>
int main(){
    int d,yr;
    printf("Enter Days: ");
    scanf("%d",&d);
    yr = (d/365);
    printf("Total Year: %d\n",yr);
    int r,w,r1;
    r = d-(yr*365);
    w = r/7;
    printf("Total weeks: %d\n",w);
    r1 = r-(w*7);
    printf("Total days: %d\n",r1);
    
    return 0;
}