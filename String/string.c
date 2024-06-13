#include<stdio.h>

main(){

    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = "Good Morning";
    int r;

    for(r=0; str[r]!='\0'; r++){
        printf("%c", str[r]);
    }
    printf("\n%s", str2);
}