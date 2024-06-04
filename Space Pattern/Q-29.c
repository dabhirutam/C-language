#include<stdio.h>

main(){

    int r,c,s;

    for(r=1; r<=5; r++){
        for(s=1; s<(6-r); s++){
            printf("  ");
        } 
        for(c=1; c<=r; c++){
            if(c==1 || r==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        for(c=(r-1); c>=1; c--){
           if(c==1 || r==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}