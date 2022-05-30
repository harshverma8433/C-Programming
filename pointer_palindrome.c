#include <stdio.h>
void main(){
    char a[100];
    char b[100];
    printf("Enter a string: ");
    scanf("%[^\n]",a);

    char *p = a;
    char *pt = b;
    int c=0;

    for(int i=0;*(p+i)!='\0';i++){
        c++;
    }

    int l=0;
    for(int i=c-1;i>=0;i--){
        *(pt +l) = *(p+i);
        l++;
    }
    *(pt+l) = '\0';

    int c1 = 0;
    int f = 0;
    
    for(int i=0;*(p+i)!='\0';i++){
        if(*(pt+i) == *(p+i)){
            f=1;
        }
        else{
            f=0;
            break;
        }
        
    }
    if(f==1){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    
}