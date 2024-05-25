#include<stdio.h>

int main(){
	
	int a,b,ans;
	char choise;
	
	printf("\nPress key '+' sun");
	printf("\nPress key '-' sub");
	printf("\nPress key '*' mul");
	printf("\nPress key '/' div");
	printf("\nPress any key for exit");

	printf("\n\nEnter Sign :- ");
	scanf("%s", &choise);
		
	printf("\n\nEnter The Value A :- ");
	scanf("%d", &a);
	
	printf("\nEnter The Value B :- ");
	scanf("%d", &b);
	
	switch (choise){
		
		case '+' :
			ans = a+b;
			printf("%d + %d  = %d", a, b, ans);
		break;
		
		case '-' :
			ans = a-b;
			printf("%d - %d  = %d", a, b, ans);
		break;
		
		case '*' :
			ans = a*b;
			printf("%d * %d  = %d", a, b, ans);
		break;
		
		case '/' :
			ans = a/b;
			printf("%d / %d  = %d", a, b, ans);
		break;
		
		default :
			printf("\nThenk you....");
	}
	
	return 0;
}
