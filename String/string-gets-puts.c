#include<stdio.h>  
main ()  
{  
    char n[20];  
    printf("Enter your name :- ");  
    gets(n);  
    printf("Hello mr. ");  
    puts(n);

    printf("\nEnter youe massage in 20 character :- ");
    fgets(n, 20, stdin);
    printf("Your massage is :- ");
    puts(n);
}  