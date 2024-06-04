#include<stdio.h>

main(){

    int size,r,sum=0;

    printf("\nEnter the size of array :- ");
    scanf("%d", &size);

    int array[size];

    printf("\nEnter the array elements\n\n");

    for(r=0; r<size; r++){
        printf("Enter the array [%d] :- ", r);
        scanf("%d", &array[r]);

        sum = sum + array[r];
    }

    printf("\nsum of array elements :- %d", sum);

}