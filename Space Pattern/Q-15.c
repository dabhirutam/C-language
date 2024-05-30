#include<stdio.h>

main(){

    int r,c,s;
    char n;

    for(r=5; r>=1; r--){

        n='A'; 

        for(s=1; s<(6-r); s++){
            printf(" \t");
        }

        for(c=r; c>=1; c--, n++){
            
            printf("%c\t", n);

        }

        printf("\n\n");

    }
}