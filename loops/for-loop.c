#include<stdio.h>

main(){
	
	int start,end,a;
	char choise;
	printf("\nPrint even number : Press key 'e'");
	printf("\nPrint odd number : Press key 'o'");
	printf("\nPress any key for exit");
	printf("\nEnter :- ");
	scanf("%s", &choise);
	
	printf("\noEnter start number :- ");
	scanf("%d", &start);
	
	printf("\nEnter end number :- ");
	scanf("%d", &end);
	
	for(start; start<=end; start++){
		
		switch (choise){

			case 'e' :
				if(start%2==0){
					printf("%d\t", start);
				}
			break;
			
			case 'o' :
				if(start%2!=0){
					printf("%d\t", start);
				}
			break;
			
		}
	}
}
