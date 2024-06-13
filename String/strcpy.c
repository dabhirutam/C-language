#include<stdio.h>
#include<string.h>

main(){

    char str[]= "Hello, How are you ?";
    char str2[50];

    strcpy(str2, str);
    
    printf("Str2 is :- %s", str2);
}