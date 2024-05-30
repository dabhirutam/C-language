#include<stdio.h>

main(){

    int r,c,s;

    for(r=5; r>=1; r--){

        for(s=1; s<(6-r); s++){
            printf(" \t");
        }

        for(c=1; c<=r; c++){

            if(c%2!=0){
                printf("-\t");
            }else{
                printf("|\t");
            }

        }

        printf("\n\n");

    }
}