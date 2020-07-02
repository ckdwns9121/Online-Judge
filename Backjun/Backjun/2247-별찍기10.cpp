#include <stdio.h>
#include <string.h>
#pragma warning(disable :4996)
char matrix[3000][3000];

void star10(int N, int x, int y) {

	if (N == 1) {
		matrix[x][y] = '*';
		return;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) continue;
			else star10(N / 3, x + (i * N / 3), y + (j * N / 3));
		}
	}

}

int main() {
	int n;
	scanf("%d", &n);
	star10(n, 0, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}