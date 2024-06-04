#include<stdio.h>

main(){

    int array[] = {545,15,4,65,56,56,65,14,45,632,721,6,15,65,156,656,89,568,366,45};
    int size,r;

    size = sizeof(array) / sizeof(array[0]);

    printf("Size of array :- %d\n",size);

    for(r=0; r<size; r++){
        printf("\nArray [%d] :- %d",r, array[r]);
    }

}