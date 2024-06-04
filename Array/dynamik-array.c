#include<stdio.h>

main(){

    int size,r;

    printf("\nEnter the size of array :- ");
    scanf("%d", &size);

    int array[size];

    printf("\nEnter the array elements\n\n");

    for(r=0; r<size; r++){
        printf("Enter the array [%d] :- ", r);
        scanf("%d", &array[r]);
    }

    for(r=0; r<size; r++){
        printf("\nArray [%d] :- %d", r, array[r]);
    }

}