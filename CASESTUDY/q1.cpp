#include <stdio.h>
#include <string.h>

int main () {
	int t;
	scanf("%d", t);
	char w[80], temp, j =0;
	for (int i = 0; i < t; i++) {
		fgets(w, 10, stdin);
		for (int j = 0; j < strlen(w) - 1; j++) {
			if (w[j] < w[j+1]) {
				temp = w[j];
				w[j] = w[j+1];
				w[j+1] = temp;
			}
		}
		puts(w);
	}

}
