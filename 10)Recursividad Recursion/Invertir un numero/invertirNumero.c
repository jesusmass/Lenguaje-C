#include <stdio.h>
#include <conio.h>
#include <string.h>

//Invertir un número
//Invest a number
//
void invetsNumber(int n){
	if(n<10)
		printf("%i",n);
	else{
		printf("%i",n%10 );
		if(n>10) invetsNumber(n/10);
	}
	
}

int main(){
	int n;
	printf("Enter the number to invest:\n");
	scanf("%i",&n);
	invetsNumber(n);
	printf("\n");
	getch();
	return 0;
}