#include <stdio.h>

int main(void)
{
	float income, tax;
	printf("Give your income: ");
	scanf("%f",&income);
	
	if (income<=5000)
		tax=0;
	else if (income<=15000)
		tax=(income-5000)*10/100;
	else if (income<=30000)
		tax=100000*10/100+(income-15000)*25/100;
	else
		tax=1000*10/100+15000*25/100+(income-35000)*35/100;
	
	printf("The tax for the income %f is %f",income, tax);		
	return 0;
}
