#include <stdio.h>

int main() {
	int M, N, total, avg, a, b, k;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &a, &b, &k);
		total += (b - a + 1) * k;

	}
	printf("%d", total/N);
}
