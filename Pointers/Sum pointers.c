#include <stdio.h>

int main(void){
	int number_one, number_two, number_three, sum;
	int *pn1, *pn2,*pn3; 
	
	printf("Give the first number: ");
	scanf("%d", &number_one);
	printf("Give the second number: ");
	scanf("%d", &number_two);
	printf("Give the third number: ");
	scanf("%d", &number_three);	
	
	pn1=&number_one;
	pn2=&number_two;
	pn3=&number_three;
	
	printf("Address of pointer one %d \n",pn1);
	printf("Address of pointer two %d \n",pn2);
	printf("Address of pointer two %d \n",pn3);
	
	sum=*pn1+*pn2+*pn3;
	
	printf("The sum of the entred numbers is: %d",sum);
	
	
	return 0;
}
