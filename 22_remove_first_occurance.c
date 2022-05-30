#include <stdio.h>
void main(){
    char a[100];
    printf("enter a string: ");
    scanf("%[^\n]",a);

    char k;
    scanf("%c",&k);

    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    for(int i=0;a[i]!='\0';i++){
        if(a[i] == c){
            for(int j=i;a[j]!='\0';j++){
                a[j] = a[j+1];
            }
            break;
        }
    }

    printf("%s",a);
}