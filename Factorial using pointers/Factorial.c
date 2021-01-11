#include <stdio.h>
int factorial(int n, int *f);

int main (void){
	int number;
	int factorial;
	
	printf("Give Number: ");
	scanf("%d",&number);
	Factorial(number,&factorial);
	printf("The Factorial of %d is %d ", number, factorial);
	
	return 0;
}

int Factorial(int n, int *f){
	int i; 
	*f=1; 
	for (i=1;i<=n;i++){
		*f= *f * i;
	}
}

