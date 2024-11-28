// Finding max and min in 3 * 3 matrix

#include <stdio.h>
int main() {
	int a[3][3];
	
	printf("Enter the matrix a elements: ");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	int min = a[0][0];
	int max = a[0][0];
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] > max) 
			{
				max = a[i][j];
			}
			else if (a[i][j] < min) 
			{
				min = a[i][j];
			}
		}
	}
	printf("Min = %d \n", min);
	printf("Max = %d \n", max);
} 
