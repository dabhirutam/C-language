#include<stdio.h>

main(){
	
	int a,b;
	char c[10];
	
	printf("Enter the word :-");
	scanf("%s", &c);
	printf("Enter the start noumber :-");
	scanf("%d", &a);
	printf("Enter the ending noumber :-");
	scanf("%d", &b);
	
	do{
		printf("\n\t%d. %s", a,c);
		a++;
	}while(a <= b);
}
