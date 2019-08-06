//Fibonacci sequence creator
#include <stdio.h>

int main(){
	int a=1, b=1, c;
	
	
	printf("Enter a value:");
	scanf("%d", &c);
	
	
	printf("%d - %d - ",a,b);
	
	for(; a+b<=c; ){
		a=a+b;
		b=a-b;
		printf("%d - ",a);	
	}
}
