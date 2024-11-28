// Subtraction of 2 matrices

#include <stdio.h> 
int main() {
	int a[3][3], b[3][3], sub[3][3];
	
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
	
	printf("Sub matrix: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			sub[i][j] = 0;
			sub[i][j] = a[i][j] - b[i][j];
			printf("%d \t", sub[i][j]);
		}
		printf("\n");
	}
}
