#include<stdio.h>

main(){

    int r,c,s;

    for(r=1; r<=5; r++){

        for(s=1; s<r; s++){
            printf(" \t");
        }

        for(c=(6-r); c>=1; c--){

            printf("*\t");

        }

        printf("\n\n");

    }
}