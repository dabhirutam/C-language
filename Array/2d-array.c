#include<stdio.h>

main(){

    int array2d [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int r,c;

    for(r=0; r<3; r++){
        for(c=0; c<3; c++){
            printf("%d ", array2d[r][c]);
        }
        printf("\n");
    }
}