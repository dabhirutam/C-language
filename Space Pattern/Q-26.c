#include<stdio.h>

main(){

    int r,c,s;

    for(r=5; r>=1; r--){

        for(c=1; c<=r; c++){

            printf("%d\t", c);

        }

        for(s=1; s<(6-r); s++){

            printf(" \t");
 
        } 

        for(s=1; s<(6-r); s++){

            printf(" \t");
 
        } 

        for(c=r; c>=1; c--){

            printf("%d\t", c);

        }

        printf("\n\n");

    }

    for(r=1; r<=5; r++){

         if(r==1){
            continue;
        }

        for(c=1; c<=r; c++){ 
 
            printf("%d\t", c);

        }

        for(s=1; s<(6-r); s++){

            printf(" \t");
 
        } 

        for(s=1; s<(6-r); s++){

            printf(" \t");
 
        } 

        for(c=r; c>=1; c--){

            printf("%d\t", c);

        }

        printf("\n\n");

    }
}