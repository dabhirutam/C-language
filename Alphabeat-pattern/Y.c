#include<stdio.h>

main(){
	
	int r, c, s;
	
	for(r=1; r<=7; r++){
		for(c=1; c<=7; c++){
			if(((r==c==1 || c==(8-r)) && r<=4) || (c==4 && r>=4)){
				printf("* ");
			}else{
				printf("  ");	
			}
		}
		printf("\n");
	}
}