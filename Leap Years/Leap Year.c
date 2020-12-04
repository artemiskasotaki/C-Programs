#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool LeapYear(int Year);

int main(void)
{
	int from,to,year;
	printf("From Year:");
	scanf("%d",&from);
	printf("To Year:");
	scanf("%d",&to);
	for (year=from;year<=to;year++)
	{
	   if(LeapYear(year)) printf("%d Leap Year\n",year);
    }

	return 0;
}

bool LeapYear(int Year)
{
	if (((Year%4 == 0)&& (Year%100 != 0))||(Year%400 == 0)) return true;
	else return false;
}

