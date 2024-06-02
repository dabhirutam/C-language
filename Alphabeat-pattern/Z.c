#include<stdio.h>

main(){
	
	int r, c, s;
	
	for(r=1; r<=7; r++){
		for(c=1; c<=7; c++){
			if((r==1 || r==7) || (r==2 && c==6) || (r==3 && c==5) || (r==4 && c==4) || (r==5 && c==3) || (r==6 && c==2)){
				printf("* ");
			}else{
				printf("  ");	
			}
		}
		printf("\n");
	}
}