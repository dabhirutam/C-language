#include<stdio.h>

main (){
	
	int a = 50;
	int b = 10;
	int sum = a + b;
	float c = 78.96;
	float d = 34.95;
	float e = c + d;
	float f = d - a;
	float h = c * d;
	char r = '#';
	char x = '$';
	
	printf("\tA = %d \n\n", a);
	printf("\tB = %d \n\n", b);
	printf("\tSum = %d \n\n", sum);
	
	a = a * 5;
	int div = b - a;
	int mul = a * b;
	int did = a / b;
	int mod = a % b;
	
	printf("\tA = %d \n\n", a);
	printf("\tB-A = %d \n\n", div);
	printf("\tA*B = %d \n\n", mul);
	printf("\tA/B = %d \n\n", did);
	printf("\tAB = %d \n\n", mod);
	printf("\tC = %.2f \n\n", c);
	printf("\tD = %.2f \n\n", d);
	printf("\tC+D = %.2f \n\n", e);
	printf("\tD-A = %.2f \n\n", f);
	printf("\tC*D = %.2f \n\n", h);
	printf("\tR = %c \n\n", r);
	printf("\tX = %c \n\n", x);
}
