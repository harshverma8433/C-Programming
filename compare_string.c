#include <stdio.h>
#include <string.h>
void main(){
    char a[100],k;
    char b[100];
    char c[100];
    printf("Enter a string: ");
    scanf("%[^\n]",a);

    scanf("%c",&k);

    printf("Enter a string: ");
    scanf("%[^\n]",b);

    // int f;
    // f = strcmp(a,b);
    // if(f==0){
    //     printf("Strings are equal.");
    // }
    // else{
    //     printf("Strings are not equal.");
    // }

    int f=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i] == b[i]){
            f = 1;
        }
        else{
            f=0;
            break;
        }
    }

    if(f==1){
        printf("Strings are same.");
    }
    else{
        printf("Strings are not same.");

    }

}