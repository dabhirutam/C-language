#include<stdio.h>
#include<string.h>

main(){

    char str[] = "apple";
    char str2[] = "apq"; 

    int ans = strcmp(str , str2);
    printf("Comparison of str and str2 :- %d", ans); 

    ans = strcmp(str2 , str);
    printf("\nComparison of str2 and str :- %d", ans);

    ans = strcmp(str , str);
    printf("\nComparison of str and str :- %d", ans);
}