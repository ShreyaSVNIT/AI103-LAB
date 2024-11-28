#include <stdio.h>

int main() {
	int T, N, digits = 0, dig, num;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		digits = 0;
		num = N;
		while (num > 0) {
			dig = num % 10;
			if (N % dig == 0) {
				digits+= 1;
			}
			num = num/ 10;
		}
		printf("%d\n", digits);
	}
}
