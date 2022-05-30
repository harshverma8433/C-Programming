#include <stdio.h>
void main(){
    char a[100];
    char *p = a;
    printf("Enter a string: ");
    scanf("%[^\n]",a);


    char k;
    scanf("%c",&k);

    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    int f=0;
    for(int i=0;*(p+i)!='\0';i++){
        if(*(p+i) == c){
            f++;
        }
    }

    printf("%d",f);
}