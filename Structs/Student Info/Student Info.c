#include <stdio.h>


struct Student {
	char lm[20];
	char name[15];
	int year;
	float grade;
};

int main(void){
	struct Student f1;
	
	printf("Information of Student \n");
	
	printf("Give Last Name: ");
	gets(f1.lm);
	printf("Give Name: ");
	gets(f1.name);
	printf("Give Year of Birth: ");
	scanf("%d",&f1.year);
	printf("Give Grade: ");
	scanf("%f",&f1.grade);
	
	printf("-------------------------------\n");
	
	printf("Last Name: %s \n",f1.lm);
	printf("Name: %s \n",f1.name);
	printf("Year of Birth: %d \n",f1.year);
	printf("Grade: %f \n",f1.grade);
		
	
		
	return 0;
}
