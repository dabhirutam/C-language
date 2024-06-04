#include<stdio.h>

main(){

    int size,r,positive=0,nagative=0,ziro=0;

    printf("\nEnter the size of array :- ");
    scanf("%d", &size);

    int array[size]; 

    printf("\nEnter array elements :\n\n");

    for(r=0; r<size; r++){
        printf("Enter array[%d] :- ", r);
        scanf("%d", &array[r]);

        if(array[r]>0){
            positive++;
        }else if(array[r]<0){
            nagative++;
        }else{
            ziro++;
        }
    }

     printf("\nPositive numbers of array :- %d", positive);
     printf("\nNagative numbers of array :- %d", nagative);
     printf("\nZiro(0) numbers of array :- %d", ziro);
}