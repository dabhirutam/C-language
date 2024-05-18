#include<stdio.h>

main(){
	
	char a[10];
	int b;
	
	printf("\tEnter Your Name:-");
	scanf("%s", &a);
	
	printf("\n\tEnter Your Age:-");
	scanf("%d", &b);
	
	printf("\n\tHellow Mr. %s Your Age is the %d", a, b);
}
