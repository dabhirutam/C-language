#include<stdio.h>

main(){

    char r,c,s;

    for(r='A'; r<='E'; r++){

        for(s=1; s<('F'-r); s++){
            printf(" \t");
        }

        for(c=r; c>='A'; c--){  

            printf("%c\t", c);

        }

        printf("\n\n");

    }
}