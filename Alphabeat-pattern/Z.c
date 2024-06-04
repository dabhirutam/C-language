#include<stdio.h>

main(){
	
	int r, c, s;
	
	for(r=7; r>=1; r--){
		for(c=1; c<=7; c++){
			if(r==c==1 || r==1 || r==7){
				printf("* ");
			}else{
				printf("  ");	
			}
		}
		printf("\n");
	}
}