// Sum of 2 matrices

#include <stdio.h> 
int main() {
	int a[3][3], b[3][3], sum[3][3];
	
	printf("Enter the matrix A elements: ");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the matrix B elements: ");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("Sum matrix: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			sum[i][j] = 0;
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d \t", sum[i][j]);
		}
		printf("\n");
	}
}
