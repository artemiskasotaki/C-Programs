#include <stdio.h>

int main(void){
	int Matrix1[20][20], Matrix2[20][20];
	int  Addiction[20][20],Subtraction[20][20],Multi[20][20];
	int i,j,n;

	printf("Incert size of square: ");
	scanf("%d",&n);
	
	printf("Input the Elements for the first matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Element [%d][%d]: ",i,j);
			scanf("%d",&Matrix1[i][j]);
		}
	}
	printf("\n");
	
	printf("Input the Elements for the second matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Element [%d][%d]: ",i,j);
			scanf("%d",&Matrix2[i][j]);
		}
	}
	printf("\n");

	printf("The first Matrix\n");
	
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("% 4d",Matrix1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("The second Matrix\n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("% 4d",Matrix2[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			Addiction[i][j]=Matrix1[i][j] + Matrix2[i][j];
			Subtraction[i][j]=Matrix1[i][j] - Matrix2[i][j];
			Multi[i][j]=Matrix1[i][j] * Matrix2[i][j];	
		}
	}
	
	printf("\n");
	printf("The Addiction of the two Matrices\n");
	for(i=0;i<n;i++){	
		for(j=0;j<n;j++){
			printf("% 4d ",Addiction[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n");
	printf("The Subtraction of the two Matrices\n");
	for(i=0;i<n;i++){	
		for(j=0;j<n;j++){
			printf("% 4d ",Subtraction[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	printf("The Multiplication of the two Matrices\n");
	for(i=0;i<n;i++){	
		for(j=0;j<n;j++){
			printf("% 4d ",Multi[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n");
	return 0;

}
