#include<stdio.h>

main(){
	
	int a = 1,b;
	
	printf("Enter the no :-");
	scanf("%d",&b);
	
	while(a<=10){
		printf("\n %d * %d = %d",b,a,b*a);
		a++;
	}
}
