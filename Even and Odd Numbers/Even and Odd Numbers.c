#include <stdio.h>


int main(void){
	int number;
	
	printf("Give a number: ");
	scanf("%d",&number);
	
	if (number==0) {
		printf("The Number 0\n");	
	}
	else if((number<0) && (number%2) != 0){
		printf("Negative Odd\n");
	}
	else if ((number<0) && (number%2) == 0){
		printf("Negative Even\n");	
	}
	else if (number>0 && (number%2) != 0){
		printf("Positive Odd\n");
	}
	else if ((number>0) && (number%2) == 0){
		printf("Positive Even\n");
	}
	
	return 0;
}
