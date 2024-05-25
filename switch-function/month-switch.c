#include<stdio.h>

main(){
	
	int choise;
	
	printf("Enter The Number 1-12");
	
	printf("\nChoise The Number :- ");
	scanf("%d", &choise);
	
	switch(choise){
		
		case 1 :
			printf("\nMonth :- January");
			printf("\nDay :- 31");
		break;
		
		case 2 :
			printf("\nMonth :- February");
			printf("\nDay :- 31");
		break;
		
		case 3 :
			printf("\nMonth :- March");
			printf("\nDay :- 31");
		break;
		
		case 4 :
			printf("\nMonth :- April");
			printf("\nDay :- 31");
		break;
		
		case 5 :
			printf("\nMonth :- May");
			printf("\nDay :- 31");
		break;
		
		case 6 :
			printf("\nMonth :- June");
			printf("\nDay :- 31");
		break;
		
		case 7 :
			printf("\nMonth :- July");
			printf("\nDay :- 31");
		break;
		
		case 8 :
			printf("\nMonth :- Agust");
			printf("\nDay :- 31");
		break;
		
		case 9 :
			printf("\nMonth :- September");
			printf("\nDay :- 31");
		break;
		
		case 10 :
			printf("\nMonth :- October");
			printf("\nDay :- 31");
		break;
		
		case 11 :
			printf("\nMonth :- November");
			printf("\nDay :- 31");
		break;
		
		case 12 :
			printf("\nMonth :- December");
			printf("\nDay :- 31");
		break;
		
		default :
			printf("\nThenk you....");
	}
}
