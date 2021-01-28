#include <stdio.h>

int main(void){
	int Array[5],i,sum=0, n;
	printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Incert Elements ");
		scanf("%d",&Array[i]);
	}

	
	for(i=0;i<n;i++){
		sum+=Array[i];
	}
	
	printf("The Sum of the Elements is: %d",sum);
	return 0;
}
