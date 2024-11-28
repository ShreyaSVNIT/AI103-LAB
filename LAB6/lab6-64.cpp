// Finding sum of each row of 3 * 3 matrix

#include <stdio.h>
int main() {
	int a[3][3], sum = 0;
	
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
			sum += a[i][j];
		}
		
		printf("Sum of row %d = %d \n", i, sum);
		sum = 0;
	}
	
}
