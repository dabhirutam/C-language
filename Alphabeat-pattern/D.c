#include<stdio.h>

main(){
	
	int r, c, s;
	
	for(r=1; r<=7; r++){
		for(c=1; c<=4; c++){
			if(c==1 || c==2 && (r==1 || r==7) || ((r==2 || r==6) && c==3) || (r==3 || r==4 || r==5) && c==4){
				printf("* ");
			}else{
				printf("  ");	
			}
		}
		printf("\n");
	}
}