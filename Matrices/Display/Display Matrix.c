#include <stdio.h>

int main(void){
	
	int Matrix[20][20], i, j, n;
	
	printf("size of square ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("Element [%d],[%d]: ",i,j);
			scanf("%d",&Matrix[i][j]);
		}
	} 
	printf("\n");
	printf("The matrix is: \n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("% 4d",Matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

