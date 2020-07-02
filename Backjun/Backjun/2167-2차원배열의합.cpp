#include <stdio.h>
#include <string>
#pragma warning(disable:4996)
int arr[301][301];

int func(int i, int j, int x, int y) {
	int sum = 0;
	for (int a = i; a < x; a++) {
		for (int b = j; b < y; b++) {
			sum += arr[a][b];
		}
	}
	return sum;
}

int main() {
	int N, M, k;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &k);
	while (k--) {
		int i, j, x, y;
		scanf("%d %d %d %d", &i, &j, &x, &y);
		printf("%d\n", func(i - 1, j - 1, x, y));
	}
	return 0;

}
