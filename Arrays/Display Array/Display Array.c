#include <stdio.h>

int main(void){
	int array[6], i;
	for(i=1;i<6;i++){
		printf("Incert element:");
		scanf("%d",&array[i]);
	}
	
	printf("The elements of the array are: ");
	for(i=1;i<6;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	
	
	return 0;
}
