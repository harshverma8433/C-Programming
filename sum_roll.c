# include<stdio.h> 

int main(){
    int roll,i,s=0,r;
    printf("Enter Your University Roll number: ");
    scanf("%d",&roll);
    for(i=0;i<4;i++)
    {
        r = roll%10; 
        roll = roll/10;
    }
    printf("%d",s);

    return 0; 

}