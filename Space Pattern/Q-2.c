#include<stdio.h>

main(){

    int r,c,s;

    for(r=1; r<=5; r++){

        for(s=1; s<(6-r); s++){
            printf(" \t");
        }

        for(c=r; c>=1; c--){

            printf("%d\t", c);

        }

        printf("\n\n");

    }
}