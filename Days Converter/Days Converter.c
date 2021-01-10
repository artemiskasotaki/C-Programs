#include <stdio.h>

int main(void){
	int days,years,weeks;
	printf("Give how many days:");
	scanf("%d",&days);
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	
	printf("%d:",years);
	printf("%d:",weeks);
	printf("%d:",days);
	
	return 0;
}

