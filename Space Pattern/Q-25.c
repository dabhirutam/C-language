#include<stdio.h>

main(){

    int r,c,s;

    for(r=1; r<=5; r++){

        for(c=1; c<=r; c++){

            printf("%d\t", c);

        }

        printf("\n\n");

    }

    for(r=5; r>=1; r--){

        if(r==5){
            continue;
        }

        for(c=1; c<=r; c++){

            printf("%d\t", c);

        }

        printf("\n\n");

    }
}