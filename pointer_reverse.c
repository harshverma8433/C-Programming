#include <stdio.h>
void main(){
    char a[100]; 
    char b[100];
    printf("Enter the string: ");
    scanf("%[^\n]",a);

    char *p = a;
    char *pt = b;
    int c=0;

    for(int i=0;*(p+i)!='\0';i++){
        c++;
    }

    int l =0;
    for(int i=c-1;i>=0;i--){
      printf("%c",*(p+i));
    }
}