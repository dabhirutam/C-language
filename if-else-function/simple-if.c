#include<stdio.h>

main(){
	int a, b, c;   
     printf("\tEnter three numbers:-");  
    scanf("%d %d %d",&a,&b,&c);  
    if(a>b && a>c)  
    {  
        printf("\n\t%d is largest",a);  
    }  
    if(b>a  && b > c)  
    {  
        printf("\n\t%d is largest",b);  
    }  
    if(c>a && c>b)  
    {  
        printf("\n\t%d is largest",c);  
    }  
    if(a == b && a == c)   
    {  
        printf("\n\tAll are equal");   
    }  
    
    if(a<b && a<c)  
    {  
        printf("\n\t%d is smalest",a);  
    }  
    if(b<a  && b < c)  
    {  
        printf("\n\t%d is smalest",b);  
    }  
    if(c<a && c<b)  
    {  
        printf("\n\t%d is smalest",c);  
    }  
}
