#include<stdio.h>

main(){
	
	int r, c, s;
	
	for(r=1; r<=7; r++){
		for(c=1; c<=7; c++){
			if(((c==1 || c==7) && (r==1)) || ((c==2 || c==6) && (r==2)) || ((c==3 || c==5) && (r==3)) || ((c==4) && (r!=1 && r!=2 && r!=3))){
				printf("* ");
			}else{
				printf("  ");	
			}
		}
		printf("\n");
	}
}