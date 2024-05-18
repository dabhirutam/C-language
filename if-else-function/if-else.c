#include<stdio.h>

main(){
	
	int a,b;
	
	printf("\tEnter Your Percentage:-");
	scanf("%d", &a);
	
	if(a < 100 & a >= 90){
		printf("\n\tYou Are Pass On A+");
	}else if(a > 80 & a <= 90){
		printf("\n\tYou Are Pass On A");
	}else if(a > 70 & a <= 80){
		printf("\n\tYou Are Pass On B+");
	}else if(a > 60 & a <= 70){
		printf("\n\tYou Are Pass On B");
	}else if(a > 50 & a <= 60){
		printf("\n\t\nYou Are Pass On C");
	}else if(a >= 33 & a <= 50){
		printf("\n\tYou Are Pass On D");
	}else if(a > 100){
		printf("\n\tPlease Enter The Valid Number");
	}else{
		printf("\n\tSorry.. You Are Fail");
	}
}
