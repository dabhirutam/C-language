#include<stdio.h>

main(){

    int size,r,even=0,odd=0;

    printf("\nEnter the size of array :- ");
    scanf("%d", &size);

    int array[size]; 

    printf("\nEnter array elements :\n\n");

    for(r=0; r<size; r++){
        printf("Enter array[%d] :- ", r);
        scanf("%d", &array[r]);

        if(array[r]%2==0){
            even++;
        }else{
            odd++;
        }
    }

    printf("\nEven numbers of array :- %d", even);
    for(r=0; r<size; r++){
        if(array[r]%2==0){
            printf("\nArray [%d] = %d", r, array[r]);
        }
    }

    printf("\n5\nOdd numbers of array :- %d", odd);
    for(r=0; r<size; r++){
        if(array[r]%2!=0){
            printf("\nArray [%d] = %d", r, array[r]);
        }
    }
}