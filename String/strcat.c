#include<stdio.h>
#include<string.h>

main(){

    char str[] = "Hello";
    char str2[] = " Good morning";
    
    printf("Str is :- %s", str);
    printf("\nStr2 is :- %s", str2);
    
    strcat(str, str2);
    
    printf("\nStr + Str2 is :- %s", str);
}