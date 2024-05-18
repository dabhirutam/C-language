#include<stdio.h>

main(){
	
	int age;
	
	printf("Enter Your Age:-");
	scanf("%d", &age);
	
	age >= 18 ? printf("You are eligible to vote...") : printf("Sorry ... you can't vote");
}
