#include <stdio.h>

int main(void){
	
  	float g1, g2, g3, mo, d1,d2; //mo for average and d1,d2 for difference 
	printf("1st Grader: ");
	scanf("%f",&g1); 
	printf("2nd Grader: ");
	scanf("%f",&g2);
	
	if ((g1-g2)>2 || (g2-g1)>2){
		printf("3rd Grader: ");
		scanf("%f",&g3);
		
		d1=g3-g1;
		
		if(d1<0) d1=-d1;
		d2=g3-g2;
		
		if(d2<0) d2=-d2;
		
		if (d1<d2)
			mo=(g3+g1)/2;
		else
			mo=(g3+g2)/2;
	}
	else
		mo=(g1+g2)/2;
	printf("mo= %f\n",mo);
	
	return 0;
	
	}

