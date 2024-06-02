#include<stdio.h>

main(){
	
	int r, c, s;
	
	for(r=1; r<=7; r++){
		for(c=1; c<=5; c++){
			if(( (c==1 || c==5) && (r!=6 && r!=7) ) || ( (r==6 && (c==2 || c==4)) || (r==7 && (c==3)) )){
				printf("* ");
			}else{
				printf("  ");	 
			}
		}
		printf("\n");
	}
}