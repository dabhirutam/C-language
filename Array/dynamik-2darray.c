#include<stdio.h>

main(){

    int row,col,r,c;

    printf("Enter the number of row :- ");
    scanf("%d", &row);
    printf("Enter the number of column :- ");
    scanf("%d", &col);

    int array2d [row][col];

    printf("\n");
    for(r=0; r<row; r++){
        for(c=0; c<col; c++){
            printf("Enter array[%d][%d] :- ", r, c);
            scanf("%d", &array2d[r][c]);
        }
    }
    
    printf("\n");
    for(r=0; r<row; r++){
        for(c=0; c<col; c++){
            printf("%d ", array2d[r][c]);
        }
        printf("\n");
    }
}