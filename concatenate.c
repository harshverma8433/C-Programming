#include <stdio.h>
#include <string.h>

void main(){
    char a[100];
    printf("Enter a string: ");
    scanf("%[^\n]",a);

    char k;
    scanf("%c",&k);

    char b[100];
    printf("Enter a string: ");
    scanf("%[^\n]",b);

    // strcat(a,b);
    // printf("%s",a);

    int len;
    len = strlen(a);

 for(int i=0;b[i]!='\0';i++){
        a[len] = b[i];
        len++;
    }

    printf("%s ",a);
}

// harsh verma