#include<stdio.h>

main(){

    int r,c,s;

    for(r=1; r<=9; r++){ 
        for(c=1; c<=9; c++){
            if(c==1 || c==5 || c==9 || r==1 || r==5 || r==9){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}