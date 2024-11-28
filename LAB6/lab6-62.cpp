// Reversing an array

#include <stdio.h>
int main() {
	int arr[5], temp, start = 0, end = 4;
	
	for (int i = 0; i<5; i++) {
		printf("Enter a value: ");
		scanf("%d", &arr[i]);
	}
	
	// loop to reverse array
	while (start<end) 
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
	printf("Reversed Array: ");
	for (int i = 0; i <5; i++) 
	{
		printf("%d", arr[i]);
	}
	
}
