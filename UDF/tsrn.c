#include<stdio.h>

greet(char name[20]){
    printf("\nHello Mr. %s, nice to meet you", name);
}

na(char name[20], int age){
    printf("\n\nMr. %s your age is %d", name, age);
}

main(){ 
    char un[20];
    int ua;

    printf("Enter your name :- ");
    scanf("%s", &un);
    printf("Enter your age :- ");
    scanf("%d", &ua);

    greet("Rutam");
    greet("Harsh");
    na(un,ua);
}