#include<stdio.h>

main(){
	
	int r, c, s;
	
	for(r=1; r<=7; r++){
		for(c=1; c<=7; c++){
			if(r==c==1 || c==(8-r)){
				printf("* ");
			}else{
				printf("  ");	
			}
		}
		printf("\n");
	}
}