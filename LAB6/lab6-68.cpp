// Multiplication of 2 matrices

#include <stdio.h> 
int main() {
	int a[3][3], b[3][3], multi[3][3];
	
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
	
	printf("Multiplied matrix: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			multi[i][j] = 0;
			multi[i][j] = a[i][j] * b[i][j];
			printf("%d \t", multi[i][j]);
		}
		printf("\n");
	}
}
