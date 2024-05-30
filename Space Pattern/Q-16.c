#include<stdio.h>

main(){

    char r,c,s;

    for(r='A'; r<='E'; r++){

        for(s='A'; s<r; s++){
            printf(" \t");
        }

        for(c=r; c<='E'; c++){  

            printf("%c\t", c);

        }

        printf("\n\n");

    }
}