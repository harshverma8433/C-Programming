# include<stdio.h> 

int main(){
    int cp,sp;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);
    printf("Enter Selling Price: ");
    scanf("%d",&sp);
    int amount;
    if(sp>cp){
        amount = sp-cp;
        printf("Profit is %d",amount);
    }
    else if(sp==cp){
        printf("NO Profit And No Loss");
    }
    else if(cp>sp){
        amount = cp-sp;
        printf("loss is %d",amount);
    }
    return 0; 

}