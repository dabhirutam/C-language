#include<stdio.h>

main(){
	
	int a;
	int b;
	
	printf("\tEnter of Value A:-");
	scanf("%d", &a);
	
	printf("\n\tEnter of Value B:-");
	scanf("%d", &b);
	
	int sum = a + b;
	
	printf("\n\t%d + %d = %d", a, b, sum);
}
