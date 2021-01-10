#include <stdio.h>

int main(void){
	int seconds, hours, minutes;
	printf("Give second:");
	scanf("%d",&seconds);
	
	hours=(seconds/3600);
	minutes=(seconds-(hours*3600))/60;
	seconds=(seconds-(hours*3600)-(minutes*60));
	
	printf("Hours: %d \n",hours);
	printf("Minutes: %d \n",minutes);
	printf("Seconds: %d \n",seconds);
	
	return 0;
}
