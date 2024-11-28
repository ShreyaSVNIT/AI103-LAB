// Transpose of a 3 * 3 matrix
//issue in this program, use another matrix

#include <stdio.h>
int main() {
	int a[3][3], temp;
	
	printf("Enter the matrix a elements: ");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

	
	
}
