#include<stdio.h>

main(){
	
	int r, c, s;
	
	for(r=1; r<=7; r++){
		for(c=1; c<=5; c++){
			if(( (c==1 && (r==2 || r==3 || r==7)) || (c==5 && (r==1 || r==5 || r==6)) ) || ( (r==1 && (c!=1 && c!=5)) || (r==4 && (c!=1 && c!=5)) || (r==7 && (c!=1 && c!=5)) )){
				printf("* ");
			}else{
				printf("  ");	 
			}
		}
		printf("\n");
	}
}