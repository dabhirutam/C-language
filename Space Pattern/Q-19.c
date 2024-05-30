#include<stdio.h>

main(){

    int r,c,s;

    for(r=5; r>=1; r--){

        for(s=1; s<(6-r); s++){
            printf(" \t");
        }

        for(c=(6-r); c<=5; c++){

            if(c%2!=0){
                printf("1\t");
            }else{
                printf("0\t");
            }

        }

        printf("\n\n");

    }
}